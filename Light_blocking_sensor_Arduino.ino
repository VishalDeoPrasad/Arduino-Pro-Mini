int lb_sensor = 8;
void setup() {
  pinMode(lb_sensor, INPUT_PULLUP);
  Serial.begin(9600);

}

void loop() {
  int state = digitalRead(lb_sensor);
  Serial.print("Sensor State : ");
  Serial.println(state);
  delay(500);
  

}
