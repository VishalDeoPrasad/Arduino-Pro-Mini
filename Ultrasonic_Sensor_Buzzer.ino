int trigPin = 6;
int echoPin = 9;
int buzzerPin = 10;
void setup() {
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  digitalWrite(trigPin, LOW); // clean the trigPin
  Serial.begin(9600); 
}
void loop() {
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); // triger for 10 micro seconds
  digitalWrite(trigPin, LOW);
  long duration = pulseIn(echoPin, HIGH); // Read returns the sound wave travel time in microseconds
  int distance = duration * 0.034 / 2;   // Calculating the distance
  Serial.print("Distance: ");
  Serial.println(distance);
  if (distance < 20){
    digitalWrite(buzzerPin, HIGH);    
  }
  else{
    digitalWrite(buzzerPin, LOW);
  }
}
