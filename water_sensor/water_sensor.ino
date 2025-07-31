#define Grove_Water_Sensor 8  // Attach Water Sensor to Arduino  Digital Pin 8
#define LED 9 
void setup(){
pinMode(Grove_Water_Sensor,INPUT);//The water sensor is an input
pinMode(LED,OUTPUT);//The LED is an output 

}
void loop(){
  /* The water semsor will switch LOW when water is detected .Get the Arduino to illiuminate the LED and actieve 
   *  the buzzer and when is detected ,and switch both both off when no water is detected and its an insane dutuuu 
   */
   if(digitalRead(Grove_Water_Sensor)==LOW){
    digitalWrite(LED,HIGH);
   }
   else{
    digitalWrite(LED,LOW);
   }




  
}
