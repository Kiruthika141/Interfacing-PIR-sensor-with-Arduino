int pirSensor = 2;   // PIR sensor output pin connected to digital pin 2
int led = 13;        // LED connected to digital pin 13

void setup() {
  pinMode(pirSensor, INPUT);  // Set PIR sensor as input
  pinMode(led, OUTPUT);       // Set LED as output
  Serial.begin(9600);         // Start Serial Monitor
  Serial.println("PIR Sensor Test Started...");
}

void loop() {
  int sensorValue = digitalRead(pirSensor);  // Read PIR sensor output

  if (sensorValue == HIGH) {
    digitalWrite(led, HIGH);                 // Turn ON LED when motion is detected
    Serial.println("Motion detected!");
  } 
  else {
    digitalWrite(led, LOW);                  // Turn OFF LED when no motion
    Serial.println("No motion...");
  }

  delay(500);  // Small delay for stability (0.5 seconds)
}

