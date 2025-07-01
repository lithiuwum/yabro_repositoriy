#include <OLED_I2C.h>
OLED  myOLED(SDA, SCL); 
extern uint8_t SmallFont[];
void setup()
{
  if(!myOLED.begin(SSD1306_128X64))
    while(1); 
    myOLED.setFont(SmallFont);

}  
    void loop(){
int yabrus = 3;
int s = 0;
int m = 0;
int h = 0;
          myOLED.print("yabrusclock", CENTER, 30);
     // myOLED.printNumI(yabrus, 0, 0, 3);
       myOLED.update();
      do
{
    // действия цикла
   myOLED.update();

 myOLED.printNumI(s, 0, 9, 3);
  myOLED.printNumI(m, 0, 18, 3);
   myOLED.printNumI(h, 0, 27, 3);
   delay(1000);
   s += 1;
   if (s > 59) 
{
  s = 0;
  m += 1;
}
   if (m > 59) 
{
  m = 0;
  h += 1;
}
   
   
   
   
   
   
   
}
while (yabrus < 1000000);
  


}
