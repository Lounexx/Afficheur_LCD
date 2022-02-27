#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x3F,16,2);


void setup() {
  lcd.init();
  lcd.backlight();
}

void loop() {
  lcd.setCursor(4,0);
  lcd.print("noob");

  lcd.setCursor(4,1);
  lcd.print("uwu");

}
