#include <Keyboard.h>

void setup() {
  // Initialize Serial Monitor
  Serial.begin(9600);

  // Configure pin 2 as input with internal pull-up resistor
  pinMode(2, INPUT);
  digitalWrite(2, HIGH); // Enable pull-up

  // Begin Keyboard emulation
  Keyboard.begin();

  // Wait for button press (pin goes LOW)
  while (digitalRead(2)) {
    // Waiting until button is pressed
  }

  // Send keystrokes after button press
  Keyboard.println("HELLO WORLD");
  delay(1000);
  Keyboard.println("I am Alive");

  // Write character '0' (ASCII 48)
  Keyboard.write(48);
  delay(2500);

  // Press and release Backspace
  Keyboard.press(KEY_BACKSPACE);
  delay(500);
  Keyboard.releaseAll();
}

void loop() {
  // Read analog value from A0
  int sensorValue = analogRead(A0);

  // Convert to voltage (assuming 5V reference)
  float voltage = sensorValue * (5.0 / 1023.0);

  // Print voltage to Serial Monitor
  Serial.println(voltage);

  delay(500); // Small delay to avoid spamming Serial output
}
I am Alive
