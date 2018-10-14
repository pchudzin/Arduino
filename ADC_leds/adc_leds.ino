int readValue = 0;
 
void setup() {
  pinMode(8, OUTPUT); // LEDs outputs
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}
 
void loop() {
  readValue = analogRead(A5); // read value from ADC   
  readValue = map(readValue, 0, 1023, 1, 5); // rescaling value

  switch( readValue ){
    case 1:
            digitalWrite(8, HIGH); 
            digitalWrite(9, LOW); 
            digitalWrite(10, LOW); 
            digitalWrite(11, LOW); 
            digitalWrite(12, LOW); 
         break;
    case 2:
            digitalWrite(8, LOW); 
            digitalWrite(9, HIGH); 
            digitalWrite(10, LOW); 
            digitalWrite(11, LOW); 
            digitalWrite(12, LOW);
         break;
    case 3:
            digitalWrite(8, LOW); 
            digitalWrite(9, LOW); 
            digitalWrite(10, HIGH); 
            digitalWrite(11, LOW); 
            digitalWrite(12, LOW); 
          break;
    case 4:
            digitalWrite(8, LOW); 
            digitalWrite(9, LOW); 
            digitalWrite(10, LOW); 
            digitalWrite(11, HIGH); 
            digitalWrite(12, LOW);
          break;
    case 5:
            digitalWrite(8, LOW); 
            digitalWrite(9, LOW); 
            digitalWrite(10, LOW); 
            digitalWrite(11, LOW); 
            digitalWrite(12, HIGH); 
          break;
  }
 
  delay(50); // delay for not reading ADC too fast               
}
