const int trigPin = 7;   // Trig pin of HC-SR04
const int echoPin = 6;   // Echo pin of HC-SR04

void setup() {
  Serial.begin(9600);          // Start Serial Monitor
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop() {
  long duration, distanceCm, distanceInch;

  // Clear the trigPin
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);

  // Trigger the sensor by sending a 10us HIGH pulse
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the echoPin with a timeout of 30ms (30000us)
  duration = pulseIn(echoPin, HIGH, 30000); // Timeout to avoid hanging

  if (duration == 0) {
    Serial.println("No object detected or out of range");
  } else {
    distanceCm = duration / 29 / 2;
    distanceInch = duration / 74 / 2;

    Serial.print("Distance: ");
    Serial.print(distanceCm);
    Serial.print(" cm, ");
    Serial.print(distanceInch);
    Serial.println(" in");
  }

  delay(200); // Delay between readings to allow sensor to stabilize
}
