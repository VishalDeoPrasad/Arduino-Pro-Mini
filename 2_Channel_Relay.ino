int relayIn1=2;
int relayIn2=3;
void setup() {
  pinMode(relayIn1, OUTPUT);
  pinMode(relayIn2, OUTPUT);
}

void loop() {
  digitalWrite(relayIn1, HIGH);
  delay(2000);
  digitalWrite(relayIn1, LOW);
  delay(2000);
  digitalWrite(relayIn2, HIGH);
  delay(2000);
  digitalWrite(relayIn2, LOW);
  delay(2000);

}
