const int LED = 22;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  // First beat
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  delay(100);

  // Second beat
  digitalWrite(LED, HIGH);
  delay(100);
  digitalWrite(LED, LOW);
  delay(700);
}
