# Programming the NodeMCU using Arduino IDE

## Setup the software
- Install the latest [Arduino ide](https://www.arduino.cc/en/software)
  > Only download the suitable Arduino IDE for your computer/laptop. Do not download the Experimental Software.

- Download ESP8266 Board:
  1. To do this copy the following code and follow the steps below: http://arduino.esp8266.com/stable/package_esp8266com_index.json
  2. Choose Preferences in the File menu 
  3. Enter the copied code in Additional Board Manager URLs part. 
  4. Then press OK.
  5. Search the word ESP8266 in Boards Manager
  6. Tools > board > boards manager. 
  7. Then install ESP8266 boards. 
  8. After complete installation. 
  9. You will see the INSTALLED label on ESP8266 boards.

- CH34X driver (Please ensure the board is plug in to computer USB port during driver installation)
  - [CH34X Driver - Get the latest driver from factory](http://www.wch.cn/downloads/CH341SER_ZIP.html)  
  ```
    > For windows use CH341SER.EXE
    > For Linux use CH341SER_LINUX.ZIP
    > For MacOS use CH341SER_MAC.ZIP
  ```
## Exercise

**Digital OUTPUT**
1. Blinking LED
2. Running LED
3. Multiple LED
7. RGB LED
8. Melodies

**Analog OUTPUT**
1. Brightness Control
2. RGB Colour Mixing

**Digital INPUT**
1. Button

**Analog INPUT**
1. LDR
2. Temperature Sensor (LM35)
3. DHT11/DHT22
4. Ultrasonic
