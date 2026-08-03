const int LED = 2;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);   // Turn ON
  delay(500);               // Wait 1 second

  digitalWrite(LED, LOW);    // Turn OFF
  delay(200);               // Wait 1 second
}