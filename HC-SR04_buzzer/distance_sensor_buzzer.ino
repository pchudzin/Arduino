
#define trigPin 12
#define echoPin 11
 
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT); 
  pinMode(2, OUTPUT); // buzzer output
}
 
void loop() {  
  range(15, 30); // activate buzzer if there is an obstacle from 15 to 30 cm from sensor 
  delay(100); 
} 
 
int calculate_distance() {
  long time, distance;
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  time = pulseIn(echoPin, HIGH); // calc impulse duration
  distance = time / 58; // calculated distance in cm
 
  return distance;
}
 
void range(int a, int b) {
  int howFar = calculate_distance();
  if ((howFar > a) && (howFar < b)) {
      digitalWrite(2, HIGH); // activate buzzer
  } else {
      digitalWrite(2, LOW); // deactivate buzzer
  }
}
