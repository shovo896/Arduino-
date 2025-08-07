#include<Stepper.h>
const int stepsPerRevolution = 90;

Stepper mySteeper(stepsPerRevolution,8,9,10,11);
void setup(){
  myStepper.setSpeed(5);
  Serial.begin(9600);
  
}
void loop(){
  Serial.println("Clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);
  Serial.println("countclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500);
}
