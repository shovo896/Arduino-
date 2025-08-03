const int buttonPin = 2;     // Push button connected to digital pin 2
const int ledPin = 13;       // LED connected to digital pin 13

int buttonState = 0;

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on LED when button is pressed
  } else {
    digitalWrite(ledPin, LOW);  // Turn off LED
  }
}
