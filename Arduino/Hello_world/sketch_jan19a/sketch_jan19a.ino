#include <lcd_spi.h>

#include <lcd_i2c.h>

lcd_i2c lcd(0x3E,16,2); //The I2C communication for this LCD is 0x3E (HEX) or 62 (DEC), 16 is the number of the columns, 2 is the number of the rows

void setup()
{
  lcd.begin(); //LCD initialization function  
  lcd.setCursor(0, 0); //cursor setting function start with column followed by row
  lcd.print("Hello World!"); //Print text
}

void loop() 
{
  // Do nothing here
}
