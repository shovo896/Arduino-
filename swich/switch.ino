// constant won't change 

//set up pin numbers 
const int buttonPin=8;
const int ledPin=2;
int buttonState=0;//variable for reading the pushbutton status
void setup(){
  //initiualize the led pin as an output
  pinMode(ledPin,OUTPUT);
  // initilize the pushbutton pin as an input 
  pinMode(buttonPin,INPUT);
}
void loop(){
  //read the state of the pushbutton value:
  buttonState=digitalRead(buttonPin);
  //check if the pushbutton is pressed 
  //if it is,the button State is High 
  if(buttonState==HIGH){
    digitalWrite(ledPin,HIGH);
  }else{
    // turn LED off 
    digitalWrite(ledPin,LOW);
  }
}
