#define diodePIN 3
 
int impletion = 0;
int change = 5;
 
void setup() {
 pinMode(diodePIN, OUTPUT);
}
 
void loop() {
 analogWrite(diodePIN, impletion); 
 
 if (impletion < 255) { 
 impletion += change;
 } else {
 impletion = 0; 
 }
 
 delay(50); 
}
