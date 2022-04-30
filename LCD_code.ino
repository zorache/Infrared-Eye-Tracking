#include <hd44780.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


// Set the LCD address to 0x27 for a 16 chars and 2 line display
LiquidCrystal_I2C lcd(0x27, 20, 4);
int input;
void setup(){
	// initialize the LCD
  Serial.begin(9600);
	lcd.init();

	// Turn on the blacklight and print a message.
	lcd.backlight();
}

void loop()
{
  if(Serial.available()>0){
  //input=Serial.parseInt();
  input=Serial.read();
  }else{
    lcd.setCursor(0,0);
  }
   if (input==1){
    lcd.setCursor(10,0);
    lcd.print("XXXXXXXXXX");
    lcd.setCursor(10,1);
    lcd.print("XXXXXXXXXX");
   }
   if (input==2){
    lcd.setCursor(0,0);
    lcd.print("XXXXXXXXXX");
    lcd.setCursor(0,1);
    lcd.print("XXXXXXXXXX");
   }
   if (input==3){
    lcd.setCursor(0,2);
    lcd.print("XXXXXXXXXX");
    lcd.setCursor(0,3);
    lcd.print("XXXXXXXXXX");
   }
   if (input==4){
    lcd.setCursor(10,2);
    lcd.print("XXXXXXXXXX");
    lcd.setCursor(10,3);
    lcd.print("XXXXXXXXXX");
   }
   delay(500);
   lcd.clear();
	// Do nothing here...s
}
