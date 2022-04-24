#include <LiquidCrystal.h>
#include <Servo.h>
#define ALCOHOLSENSOR    6
#define MOTOR            7
#define HELMET_STATE     13
#define ALARM            9
#define LED              8
//sound 

#define  c     3830    // 261 Hz
#define  d     3400    // 294 Hz
#define  e     3038    // 329 Hz
#define  f     2864    // 349 Hz
#define  g     2550    // 392 Hz
#define  a     2272    // 440 Hz
#define  b     2028    // 493 Hz
#define  C     1912    // 523 Hz
// Define a special note, 'R', to represent a rest
#define  R     0


// the setup routine runs once when you press reset:

Servo myservo;
int pos = 0;    // variable to store the servo position

//Sound
int speakerOut = 9;
// Do we want debugging on serial out? 1 for yes, 0 for no
int DEBUG = 0;

//LCD
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()  { 
  
  pinMode(ALCOHOLSENSOR, INPUT);
  pinMode(MOTOR, OUTPUT);
  pinMode(HELMET_STATE, INPUT);
  pinMode(ALARM, OUTPUT);
  pinMode(LED, OUTPUT);
  myservo.attach( 10, 1000, 2000 );  // attaches the servo on pin 9 to the servo object

//sound
  pinMode(speakerOut, OUTPUT);
  if (DEBUG) {
    Serial.begin(9600); // Set serial out if we want debugging
//LCD
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
  lcd.print("hello, world!");
 
 }

} 

//sound==============================================================================

int melody[] = {  C,  b,  g,  C,  b,   e,  R,  C,  c,  g, a, C };
int beats[]  = { 16, 16, 16,  8,  8,  16, 32, 16, 16, 16, 8, 8 };
int MAX_COUNT = sizeof(melody) / 2; // Melody length, for looping.

// Set overall tempo
long tempo = 10000;
// Set length of pause between notes
int pause = 1000;
// Loop variable to increase Rest length
int rest_count = 100; //<-BLETCHEROUS HACK; See NOTES

// Initialize core variables
int tone_ = 0;
int beat = 0;
long duration  = 0;
void playTone() {
  long elapsed_time = 0;
  if (tone_ > 0) { // if this isn't a Rest beat, while the tone has
    //  played less long than 'duration', pulse speaker HIGH and LOW
    while (elapsed_time < duration) {

      digitalWrite(speakerOut,HIGH);
      delayMicroseconds(tone_ / 2);

      // DOWN
      digitalWrite(speakerOut, LOW);
      delayMicroseconds(tone_ / 2);

      // Keep track of how long we pulsed
      elapsed_time += (tone_);
    }
  }
  else { // Rest beat; loop times delay
    for (int j = 0; j < rest_count; j++) { // See NOTE on rest_count
      delayMicroseconds(duration);  
    }                                
  }                                
}

 
// the loop routine runs over and over again forever:
void loop()  { 
  
   if(digitalRead(HELMET_STATE) == HIGH)
  {
    if(digitalRead(ALCOHOLSENSOR) == HIGH)
    {
         digitalWrite(MOTOR, LOW);   
         digitalWrite(LED, HIGH); 
         digitalWrite(ALARM, HIGH); 
         delay(1);                       // wait for a second   

  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  //lcd.print(millis() / 1000);
lcd.print("Alcohol Detected!");

delay(100);
    }
    else 
    {

for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'

    delay(15);                       // waits 15ms for the servo to reach the position  
}
  

          //digitalWrite(MOTOR, HIGH);
          digitalWrite(LED, LOW); 
          digitalWrite(ALARM,LOW); 
lcd.clear();
  
    }
    }
   else 
   {
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
lcd.print("!!No Helmet!!");
delay(100);
    }

}
