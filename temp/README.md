This project is an Arduino-based simple temperature monitoring system with an Arduino, a TMP36 analog temperature sensor, and a 16x2 LCD display. The TMP36 sensor measures the surrounding temperature and provides a voltage proportional to the temperature in Celsius, which the Arduino uses through an analog pin. The voltage is then converted to a temperature value by a simple formula, and the result is presented on the LCD in real time. The LCD is connected to a 10k potentiometer to change the screen's contrast for best readability. The project shows how to connect analog sensors and LCDs to Arduino and is suitable for beginners who want to learn about temperature sensing and display systems.
I have done the circuit and simulated on TINKERCAD.com
The formula i have used for calculation is Vout from the device = measured Vout from tm36 *(5.0/1024) 
Temperature in degree celcius is Vout * 100 ;





