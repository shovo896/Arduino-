void setup() {
  pinMode(8,OUTPUT);

}
//the loop functions run over and over again forever 
void loop(){
  digitalWrite(8,HIGH);
  delay(1000);
  digitalWrite(8,LOW);
  delay(1000);//wait for a second 
}
