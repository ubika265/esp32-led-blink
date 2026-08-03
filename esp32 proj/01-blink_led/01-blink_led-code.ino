const int LED = 15;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);   // Turn ON
  delay(1000);               // Wait 1 second

  digitalWrite(LED, LOW);    // Turn OFF
  delay(1000);               // Wait 1 second
}