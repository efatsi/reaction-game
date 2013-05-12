























.build/uno/EasyTransferI2C/EasyTransferI2C.o : lib/EasyTransferI2C/EasyTransferI2C.cpp
	@echo EasyTransferI2C/EasyTransferI2C.cpp
	@mkdir -p .build/uno/EasyTransferI2C
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c lib/EasyTransferI2C/EasyTransferI2C.cpp
include .build/uno/EasyTransferI2C/EasyTransferI2C.d



.build/uno/EasyTransferI2C/libEasyTransferI2C.a : .build/uno/EasyTransferI2C/EasyTransferI2C.o
	@echo Linking libEasyTransferI2C.a
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-ar rcs $@ $^












.build/uno/ReactionPlayer/ReactionPlayer.o : lib/ReactionPlayer/ReactionPlayer.cpp
	@echo ReactionPlayer/ReactionPlayer.cpp
	@mkdir -p .build/uno/ReactionPlayer
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c lib/ReactionPlayer/ReactionPlayer.cpp
include .build/uno/ReactionPlayer/ReactionPlayer.d



.build/uno/ReactionPlayer/libReactionPlayer.a : .build/uno/ReactionPlayer/ReactionPlayer.o
	@echo Linking libReactionPlayer.a
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-ar rcs $@ $^







.build/uno/Wire/utility/twi.o : /Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility/twi.c
	@echo Wire/utility/twi.c
	@mkdir -p .build/uno/Wire/utility
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility/twi.c
include .build/uno/Wire/utility/twi.d






.build/uno/Wire/Wire.o : /Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/Wire.cpp
	@echo Wire/Wire.cpp
	@mkdir -p .build/uno/Wire
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/Wire.cpp
include .build/uno/Wire/Wire.d



.build/uno/Wire/libWire.a : .build/uno/Wire/utility/twi.o .build/uno/Wire/Wire.o
	@echo Linking libWire.a
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-ar rcs $@ $^












.build/uno/ButtonPlayer/ButtonPlayer.o : lib/ButtonPlayer/ButtonPlayer.cpp
	@echo ButtonPlayer/ButtonPlayer.cpp
	@mkdir -p .build/uno/ButtonPlayer
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c lib/ButtonPlayer/ButtonPlayer.cpp
include .build/uno/ButtonPlayer/ButtonPlayer.d



.build/uno/ButtonPlayer/libButtonPlayer.a : .build/uno/ButtonPlayer/ButtonPlayer.o
	@echo Linking libButtonPlayer.a
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-ar rcs $@ $^







.build/uno/arduino/malloc.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/malloc.c
	@echo arduino/malloc.c
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/malloc.c
include .build/uno/arduino/malloc.d

.build/uno/arduino/WInterrupts.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/WInterrupts.c
	@echo arduino/WInterrupts.c
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/WInterrupts.c
include .build/uno/arduino/WInterrupts.d

.build/uno/arduino/wiring.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring.c
	@echo arduino/wiring.c
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring.c
include .build/uno/arduino/wiring.d

.build/uno/arduino/wiring_analog.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring_analog.c
	@echo arduino/wiring_analog.c
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring_analog.c
include .build/uno/arduino/wiring_analog.d

.build/uno/arduino/wiring_digital.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring_digital.c
	@echo arduino/wiring_digital.c
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring_digital.c
include .build/uno/arduino/wiring_digital.d

.build/uno/arduino/wiring_pulse.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring_pulse.c
	@echo arduino/wiring_pulse.c
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring_pulse.c
include .build/uno/arduino/wiring_pulse.d

.build/uno/arduino/wiring_shift.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring_shift.c
	@echo arduino/wiring_shift.c
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/wiring_shift.c
include .build/uno/arduino/wiring_shift.d






.build/uno/arduino/CDC.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/CDC.cpp
	@echo arduino/CDC.cpp
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/CDC.cpp
include .build/uno/arduino/CDC.d

.build/uno/arduino/HardwareSerial.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/HardwareSerial.cpp
	@echo arduino/HardwareSerial.cpp
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/HardwareSerial.cpp
include .build/uno/arduino/HardwareSerial.d

.build/uno/arduino/HID.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/HID.cpp
	@echo arduino/HID.cpp
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/HID.cpp
include .build/uno/arduino/HID.d

.build/uno/arduino/IPAddress.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/IPAddress.cpp
	@echo arduino/IPAddress.cpp
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/IPAddress.cpp
include .build/uno/arduino/IPAddress.d

.build/uno/arduino/main.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/main.cpp
	@echo arduino/main.cpp
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/main.cpp
include .build/uno/arduino/main.d

.build/uno/arduino/new.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/new.cpp
	@echo arduino/new.cpp
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/new.cpp
include .build/uno/arduino/new.d

.build/uno/arduino/Print.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/Print.cpp
	@echo arduino/Print.cpp
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/Print.cpp
include .build/uno/arduino/Print.d

.build/uno/arduino/Stream.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/Stream.cpp
	@echo arduino/Stream.cpp
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/Stream.cpp
include .build/uno/arduino/Stream.d

.build/uno/arduino/Tone.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/Tone.cpp
	@echo arduino/Tone.cpp
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/Tone.cpp
include .build/uno/arduino/Tone.d

.build/uno/arduino/USBCore.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/USBCore.cpp
	@echo arduino/USBCore.cpp
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/USBCore.cpp
include .build/uno/arduino/USBCore.d

.build/uno/arduino/WMath.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/WMath.cpp
	@echo arduino/WMath.cpp
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/WMath.cpp
include .build/uno/arduino/WMath.d

.build/uno/arduino/WString.o : /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/WString.cpp
	@echo arduino/WString.cpp
	@mkdir -p .build/uno/arduino
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions  -o $@ -c /Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino/WString.cpp
include .build/uno/arduino/WString.d



.build/uno/arduino/libarduino.a : .build/uno/arduino/malloc.o .build/uno/arduino/WInterrupts.o .build/uno/arduino/wiring.o .build/uno/arduino/wiring_analog.o .build/uno/arduino/wiring_digital.o .build/uno/arduino/wiring_pulse.o .build/uno/arduino/wiring_shift.o .build/uno/arduino/CDC.o .build/uno/arduino/HardwareSerial.o .build/uno/arduino/HID.o .build/uno/arduino/IPAddress.o .build/uno/arduino/main.o .build/uno/arduino/new.o .build/uno/arduino/Print.o .build/uno/arduino/Stream.o .build/uno/arduino/Tone.o .build/uno/arduino/USBCore.o .build/uno/arduino/WMath.o .build/uno/arduino/WString.o
	@echo Linking libarduino.a
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-ar rcs $@ $^















.build/uno/src/sketch.o : .build/uno/src/sketch.cpp
	@echo src/sketch.cpp
	@mkdir -p .build/uno/src
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-g++ -mmcu=atmega328p -ffunction-sections -fdata-sections -g -Os -w -DF_CPU=16000000L -DARDUINO=100 -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/variants/standard -Ilib/EasyTransferI2C -Ilib/EasyTransferI2C/Examples -Ilib/EasyTransferI2C/Examples/EasyTransfer_RX_Example -Ilib/EasyTransferI2C/Examples/EasyTransfer_TX_Example -Ilib/ReactionPlayer -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire -I/Applications/Arduino.app/Contents/Resources/Java/libraries/Wire/utility -Ilib/ButtonPlayer -I/Applications/Arduino.app/Contents/Resources/Java/hardware/arduino/cores/arduino -fno-exceptions -iquote src  -o $@ -c .build/uno/src/sketch.cpp
include .build/uno/src/sketch.d







.build/uno/firmware.elf : .build/uno/src/sketch.o .build/uno/EasyTransferI2C/libEasyTransferI2C.a .build/uno/ReactionPlayer/libReactionPlayer.a .build/uno/Wire/libWire.a .build/uno/ButtonPlayer/libButtonPlayer.a .build/uno/arduino/libarduino.a
	@echo Linking firmware.elf
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-gcc -Os -Wl,--gc-sections -mmcu=atmega328p -o $@ $^ -lm


.build/uno/firmware.hex : .build/uno/firmware.elf
	@echo Converting to firmware.hex
	@/Applications/Arduino.app/Contents/Resources/Java/hardware/tools/avr/bin/avr-objcopy -O ihex -R .eeprom $^ $@

include .build/uno/src/dependencies.d .build/uno/arduino/dependencies.d .build/uno/EasyTransferI2C/dependencies.d .build/uno/ButtonPlayer/dependencies.d .build/uno/ReactionPlayer/dependencies.d .build/uno/Wire/dependencies.d

all : .build/uno/firmware.hex
	@true

