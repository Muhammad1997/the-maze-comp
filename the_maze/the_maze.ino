/*code made by Muhammad Magdy Srour for the maze comp. started at 7/3/2018.
mail:mosmagdysror@live.com
phone:01125424928
*/

//------------------------------------------------------------

//motor pins
#define m11 2 //rigt motor 1st terminal 
#define m12 3 //rigt motor 2nd terminal //pwm
#define m21 4 //left motor 1st terminal
#define m22 5 //left motor 2nd terminal //pwm

//ultra_sonic pins
#define tr 6  //rigt sonic trigger terminal
#define er 7  //rigt sonic echo terminal
#define tm 8  //middle sonic trigger terminal
#define em 9  //middle sonic echo terminal
#define tl 10 //left sonic trigger terminal
#define el 11 //left sonic echo terminal

float d1,d2,d3;

void setup() {
  
//motor output 
pinMode(m11,OUTPUT);  
pinMode(m12,OUTPUT);
pinMode(m21,OUTPUT);
pinMode(m22,OUTPUT);

//sonic output
pinMode(tr,OUTPUT);  
pinMode(tm,OUTPUT);
pinMode(tl,OUTPUT);

//sonic input
pinMode(er,INPUT);  
pinMode(em,INPUT);
pinMode(el,INPUT);
Serial.begin(9600);
Serial.println("OK !!");
delay(500);
}

void loop() { 

}
