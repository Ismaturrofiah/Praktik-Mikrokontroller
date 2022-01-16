#include <LiquidCrystal.h>
LiquidCrystal lcd(8,9,4,5,6,7);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.begin(16,2);
lcd.setCursor(0,0);
lcd.print("Lab Mikrokontroller");
lcd.setCursor(0,1);
lcd.print("Praktikum Mikrokontroller 2");

lcd.noDisplay();
delay(500);
lcd.display();
delay(500);
lcd.noDisplay();
delay(500);
lcd.display();
delay(500);
lcd.clear();

for (int pos = 0; pos < 29; pos++) {
  lcd.setCursor(0,0);
  lcd.print("Lab Mikrokontroller");
  lcd.scrollDisplayLeft();
  delay(150);
  }
lcd.setCursor(0,0);
lcd.print("Praktikum Mikrokontroller 2");
delay(500);
lcd.setCursor(16,2);
lcd.autoscroll();
lcd.print("Praktikum Mikrokontroller 2");
delay(500);
lcd.noAutoscroll();
lcd.clear();
}
