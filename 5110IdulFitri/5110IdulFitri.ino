// (C)2011 Henning Karlsen
// web: http://www.henningkarlsen.com/electronics
//

//
// This program requires a Nokia 5110 LCD module.
//
// It is assumed that the LCD module is connected to
// the following pins using a levelshifter to get the
// correct voltage to the module.
//      SCK  - Pin 8
//      MOSI - Pin 9
//      DC   - Pin 10
//      RST  - Pin 11
//      CS   - Pin 12
//
#include <LCD5110_Graph.h>
LCD5110 myGLCD(8,9,10,11,12);
extern uint8_t SmallFont[];
extern uint8_t masjid[];
void setup()
{
  myGLCD.InitLCD();
  myGLCD.setFont(SmallFont);
  myGLCD.drawBitmap(0, 0, masjid, 84, 48);
  myGLCD.print("Selamat", RIGHT, 0);
  myGLCD.print("Hari", 50, 10);
  myGLCD.print("Raya", 50, 20);
  myGLCD.print("Idul Fitri", CENTER,30);
  myGLCD.print("1438 H", CENTER, 40);
  myGLCD.update();
}
void loop()
{
}
