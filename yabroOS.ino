// OLED_I2C_Bitmap
// Copyright (C)2018 Rinky-Dink Electronics, Henning Karlsen. All right reserved
// web: http://www.RinkyDinkElectronics.com/
//
// **********************************************
// *** This demo is for 128x64 pixel displays ***
// **********************************************
//
// A quick demo of how to use my OLED_I2C library.
//
// To use the hardware I2C (TWI) interface of the Arduino you must connect
// the pins as follows:
//
// Arduino Uno/2009:
// ----------------------
// Display:  SDA pin   -> Arduino Analog 4 or the dedicated SDA pin
//           SCL pin   -> Arduino Analog 5 or the dedicated SCL pin
//
// Arduino Leonardo:
// ----------------------
// Display:  SDA pin   -> Arduino Digital 2 or the dedicated SDA pin
//           SCL pin   -> Arduino Digital 3 or the dedicated SCL pin
//
// Arduino Mega:
// ----------------------
// Display:  SDA pin   -> Arduino Digital 20 (SDA) or the dedicated SDA pin
//           SCL pin   -> Arduino Digital 21 (SCL) or the dedicated SCL pin
//
// Arduino Due:
// ----------------------
// Display:  SDA pin   -> Arduino Digital 20 (SDA) or the dedicated SDA1 (Digital 70) pin
//           SCL pin   -> Arduino Digital 21 (SCL) or the dedicated SCL1 (Digital 71) pin
//
// The internal pull-up resistors will be activated when using the 
// hardware I2C interfaces.
//
// You can connect the OLED display to any available pin but if you use 
// any other than what is described above the library will fall back to
// a software-based, TWI-like protocol which will require exclusive access 
// to the pins used, and you will also have to use appropriate, external
// pull-up resistors on the data and clock signals.
//

#include <OLED_I2C.h>

OLED  myOLED(SDA, SCL); // Remember to add the RESET pin if your display requires it...

extern uint8_t logo[];
extern uint8_t init0[];

void setup()
{
  if(!myOLED.begin(SSD1306_128X64))
    while(1);   // In case the library failed to allocate enough RAM for the display buffer...
      myOLED.drawBitmap(0, 0, init0, 128, 64);
  myOLED.update();
        delay(4000);
    myOLED.clrScr();
      myOLED.update();
   
                myOLED.update();
      delay(3000);
}

void loop()
{
 
 // delay(4000);
  //for (int i=0; i<2; i++)
  //{
   // myOLED.invert(true);
   // delay(500);
    //myOLED.invert(false);
   // delay(500);
  //}
  //delay(4000);                        //delay stntartniy
    myOLED.clrScr();
  myOLED.drawBitmap(0, 0, logo, 128, 64);
  myOLED.update();

//  myOLED.clrScr();
 // myOLED.drawBitmap(0, 0, logo, 128, 64);
 // myOLED.update();
 // delay(4000);
 // for (int i=0; i<2; i++)
  //{
  //  myOLED.invert(true);
 //   delay(500);
   // myOLED.invert(false);
   // delay(500);
//  }
 // delay(4000);
}


