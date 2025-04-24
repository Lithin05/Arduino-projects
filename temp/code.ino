#include<LiquidCrystal.h>
LiquidCrystal lcd (12,11,5,4,3,2);
void setup(){
  Serial.begin(9600);//Initialize serial communication
  lcd.begin(16,2);//Initialize lcd
  lcd.clear();
}void loop(){
  lcd.setCursor(0,0);
  lcd.print("Temperature :");
  int temp = analogRead(1);//Read Temperature
  float Vout = temp *(5.0/1023);//conversion of tmp36 to respected voltage
  float degree= (Vout - 0.5)*100;//Output in degree celcius
  lcd.setCursor(0,1);//Next line in lcd
  lcd.print(degree);//print temperature in serial monitor
  delay(100);
}

