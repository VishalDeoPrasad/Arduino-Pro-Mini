void setup() {
  pinMode(7, OUTPUT);
}

void loop() {
  digitalWrite(7, HIGH); // LED On
  delay(500);             // delay (1000 = 1s)
  digitalWrite(7, LOW);  // LED Off
  delay(500);             // delay

}
