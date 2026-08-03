const int LED = 22;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {

  for (int number = 1; number <= 5; number++) {

    for (int i = 0; i < number; i++) {

      digitalWrite(LED, HIGH);
      delay(200);

      digitalWrite(LED, LOW);
      delay(200);
    }

    delay(1000);
  }
}