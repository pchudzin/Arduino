#define red_diode 3
#define green_diode 5
#define blue_diode 6

int r_impletion = 0;
int g_impletion = 0;
int b_impletion = 0;

int change = 5;
bool fade_in = true; 

void setup() {
 pinMode(red_diode, OUTPUT);
 pinMode(green_diode, OUTPUT);
 pinMode(blue_diode, OUTPUT);
}
 
void loop() {
  fade_in_fade_out(red_diode, r_impletion, 50);
  fade_in_fade_out(green_diode, g_impletion, 100);
  fade_in_fade_out(blue_diode, b_impletion, 200);
}

void fade_in_fade_out(int diode, int impletion, int delay_time ){
   analogWrite(diode, impletion);

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
