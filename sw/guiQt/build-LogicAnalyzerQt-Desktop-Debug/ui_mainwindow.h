/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionStart;
    QAction *actionStop;
    QAction *actionSettings;
    QAction *actionQuit;
    QWidget *centralWidget;
    QLabel *label;
    QLabel *lbl_Baudrate;
    QLabel *label_2;
    QLabel *lbl_SerialPort;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuLogging;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(665, 373);
        actionStart = new QAction(MainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        actionStop = new QAction(MainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(520, 330, 61, 16));
        lbl_Baudrate = new QLabel(centralWidget);
        lbl_Baudrate->setObjectName(QString::fromUtf8("lbl_Baudrate"));
        lbl_Baudrate->setGeometry(QRect(590, 330, 59, 14));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(350, 330, 71, 16));
        lbl_SerialPort = new QLabel(centralWidget);
        lbl_SerialPort->setObjectName(QString::fromUtf8("lbl_SerialPort"));
        lbl_SerialPort->setGeometry(QRect(430, 331, 59, 14));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 665, 19));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuLogging = new QMenu(menuBar);
        menuLogging->setObjectName(QString::fromUtf8("menuLogging"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuLogging->menuAction());
        menuFile->addAction(actionQuit);
        menuLogging->addAction(actionStart);
        menuLogging->addAction(actionStop);
        menuLogging->addSeparator();
        menuLogging->addAction(actionSettings);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        actionStart->setText(QApplication::translate("MainWindow", "Start", 0, QApplication::UnicodeUTF8));
        actionStop->setText(QApplication::translate("MainWindow", "Stop", 0, QApplication::UnicodeUTF8));
        actionSettings->setText(QApplication::translate("MainWindow", "Settings", 0, QApplication::UnicodeUTF8));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindow", "Baudrate:", 0, QApplication::UnicodeUTF8));
        lbl_Baudrate->setText(QString());
        label_2->setText(QApplication::translate("MainWindow", "Serial Port", 0, QApplication::UnicodeUTF8));
        lbl_SerialPort->setText(QString());
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0, QApplication::UnicodeUTF8));
        menuLogging->setTitle(QApplication::translate("MainWindow", "Logging", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
