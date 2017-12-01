#include <Servo.h>
Servo n;
Servo m;



void setup() {
 Serial.begin(9600);
 n.attach (3);
 m.attach (5);
}

void loop() {
 
  int matt = analogRead(A5)/10;
  int shiv = analogRead(A4)/10;
  Serial.println(shiv);
  Serial.println(matt);
  n.write (shiv);
  m.write (matt); 
  delay (100);   
}

 
