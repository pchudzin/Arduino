#define diodePIN 3
#define delay_time 50

int impletion = 0;
int change = 5;
bool fade_in = true; 

void setup() {
 pinMode(diodePIN, OUTPUT);
}
 
void loop() {
 analogWrite(diodePIN, impletion); 
 
 if ( (impletion < 255) && (fade_in == true) ) { 
  impletion += change;
 } else {
  impletion -= change;
 }
 if( (impletion == 255) && (fade_in == true) ){
   fade_in = false;
 }
 if ( (impletion == 0) && (fade_in == false) ){
    fade_in = true;
 }
 
 delay(delay_time); 
}
