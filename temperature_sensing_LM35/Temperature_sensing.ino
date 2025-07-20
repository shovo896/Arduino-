float temp;
int tempPin = A0; // Assign analog pin A0 to tempPin

void setup() {
  Serial.begin(9600);
}

void loop() {
  temp = analogRead(tempPin);         
  temp = temp * 0.48828125;  // Convert ADC to Celsius (for 5V reference and 10-bit ADC)
  Serial.print("Temperature: ");
  Serial.print(temp);
  Serial.println("Dutee cutie");
  delay(1000);
}
