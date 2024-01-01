#include <AvrI2c_Greiman.h>
#include <LiquidCrystal_I2C_AvrI2C.h>




LiquidCrystal_I2C_AvrI2C lcd(0x27, 16, 2);

byte customChar[] = {
  B00000,
  B01010,
  B00000,
  B01110,
  B11111,
  B11111,
  B01110,
  B00000
};

void setup() {
  lcd.begin();
  lcd.createChar(0, customChar);
  lcd.home();
  lcd.write(0);
}

void loop() { }
