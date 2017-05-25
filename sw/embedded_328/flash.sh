/opt/arduino-1.6.12/hardware/tools/avr/bin/avrdude -C/opt/arduino-1.6.12/hardware/tools/avr/etc/avrdude.conf -v -patmega328p -carduino -P/dev/ttyUSB0 -b57600 -D -Uflash:w:main.hex:i
