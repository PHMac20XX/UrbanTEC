//Pedro Macedo - UrbanTec

#include <Ultrasonic.h>
 Ultrasonic ultrassom(8,7); //Nome do Sensor
long distancia; //Variavel

 void setup() {
 Serial.begin(9600); 
 
 }

 void loop()
 {
   distancia = ultrassom.Ranging(CM);

   Serial.print(distancia); 
   Serial.println("cm");
   delay(1000);
 }
