const int pingPin=7;
const int echoPin=6;
void setup(){
  Serial.begin(9600);// strating Serial Terminal
}
void loop(){
  long duration,inches,cm;
  pinMode(pingPin,OUTPUT);
  digitalWrite(pingPin,LOW);
  delayMicroseconds(10);
  digitalWrite(pingPin,LOW);
  pinMode(echoPin,INPUT);
  duration=pulseIn(echoPin,HIGH);
  inches=microsecondsToInches(duration);
  cm=microsecondsToCentimeters(duration);
  Serial.print(inches);
  Serial.print("in,");
  Serial.print(cm);
  Serial.print("cm ");
  Serial.println();
  delay(1);
  
}
long microsecondsToCentimeters(long microseconds){
  return microseconds/29/2;
}
long microsecondsToInches(long microseconds){
  return microseconds/29/2 ;
}
