#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "settingsdialog.h"
#include <iostream>
#include "qextserialport.h"
#include "qextserialenumerator.h"
#include <QDebug>
#include <cstdio>
#include <sstream>
#include <linepainter.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    SerialPortOpen = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::OpenSettingsWindow(void)
{
    SettingsDialog *settings = new SettingsDialog();
    settings->RegisterParentClass(this);
    settings->SetCurrentBaudrateIndex(BaudrateIndex);
    settings->SetCurrentSerialIndex(SerialPortIndex);
    settings->show();
}

void MainWindow::SetSelctedBaudrateLabel(int index)
{
    BaudrateIndex = index;
    SerialPortBaudrate = CalculateBaudrateFromIndex(BaudrateIndex).toInt();
    this->ui->lbl_Baudrate->setText(CalculateBaudrateFromIndex(BaudrateIndex));

}

QString MainWindow::CalculateBaudrateFromIndex(int index)
{
    QString BaudrateString = "0";
    switch(index)
    {
    case 0:
        BaudrateString = "9600";
        break;
    case 1:
        BaudrateString = "19200";
        break;
    case 2:
        BaudrateString = "38400";
        break;
    case 3:
        BaudrateString = "57600";
        break;
    case 4:
        BaudrateString = "115200";
        break;
    default:
        BaudrateString = "9600";
        break;
    }
    std::cout << "Selected baudrate: " << BaudrateString.toStdString() << std::endl;
    return BaudrateString;
}

void MainWindow::SetSelectedSerialPortLabel(QString port, int index)
{
    SerialPortIndex = index;
    SerialPortName = port;
    std::cout << "Selected serial port: " << this->SerialPortName.toStdString()  << std::endl;
    this->ui->lbl_SerialPort->setText(port);
}

void MainWindow::on_actionSettings_triggered()
{
    OpenSettingsWindow();
}

void MainWindow::on_actionQuit_triggered()
{
    this->close();
}

void MainWindow::ConnectToSerial(void)
{
        this->port = new QextSerialPort(SerialPortName, QextSerialPort::EventDriven);
        port->setBaudRate((BaudRateType)SerialPortBaudrate);
        port->setFlowControl(FLOW_OFF);
        port->setParity(PAR_NONE);
        port->setDataBits(DATA_8);
        port->setStopBits(STOP_2);

        if (port->open(QIODevice::ReadWrite) == true)
        {
            connect(port, SIGNAL(readyRead()), this, SLOT(onReadyRead()));
            //connect(port, SIGNAL(dsrChanged(bool)), this, SLOT(onDsrChanged(bool)));
            if (!(port->lineStatus() & LS_DSR))
                qDebug() << "warning: device is not turned on";
            qDebug() << "listening for data on" << port->portName();
        }
        else {
            qDebug() << "device failed to open:" << port->errorString();
        }
}

void MainWindow::onReadyRead()
{
    QByteArray bytes;
    int a = port->bytesAvailable();
    bytes.resize(a);
    port->read(bytes.data(), bytes.size());
    MeasurementResponse response = ParseSerialData(&bytes);
    std::cout << "Response: " << response.timestamp << ": " << (int)response.value << std::endl;
    AddPointToLineAndPlot(response.value, 0);
    AddPointToLineAndPlot(response.value, 1);
    AddPointToLineAndPlot(response.value, 2);
    AddPointToLineAndPlot(response.value, 3);
    AddPointToLineAndPlot(response.value, 4);
    AddPointToLineAndPlot(response.value, 5);
    AddPointToLineAndPlot(response.value, 6);
    AddPointToLineAndPlot(response.value, 7);
}

void MainWindow::on_actionStart_triggered()
{
    if(SerialPortOpen == false)
    {
        SerialPortOpen = true;
        ConnectToSerial();
    }
    else
    {
        port->close();
        SerialPortOpen = true;
        ConnectToSerial();
    }
}

void MainWindow::on_actionStop_triggered()
{
    if(SerialPortOpen == true)
    {
        port->close();
        SerialPortOpen = false;
    }


    line.Clear(this->ui->customPlot);
}

MainWindow::MeasurementResponse MainWindow::ParseSerialData(QByteArray *buf)
{
        MeasurementResponse ret;
        if(buf->size() == 7)
        {
            quint32 timestamp = (quint8)buf->at(0) << 24 | (quint8)buf->at(1) << 16 | (quint8)buf->at(2) << 8 | (quint8)buf->at(3);
            qint8 data = (quint8)buf->at(4);
            ret.str = timestamp + ": " + QString::fromStdString(IntToHexString((quint8)data));
            ret.timestamp = timestamp;
            ret.value = data;
        }
        return ret;
}

std::string MainWindow::IntToHexString(int number)
{
    std::stringstream ss;
    ss<< std::hex << number; // int decimal_value
    std::string res ( ss.str() );
    return res;
}

void MainWindow::AddPointToLineAndPlot(quint8 data, int channel)
{
    double y = (double)(((data >> channel)) & 0x01);
    double x = newsig[channel].getNumberOfPoints() + 1;
    newsig[channel].AddPoint(x, y+channel);

    line.setLineIndex(channel);
    line.PaintLine(this->ui->customPlot, newsig[channel], channel);
}
