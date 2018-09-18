
// Here's where we'll keep our channel values
int throttle;
int turning;
int aux;
int tuned_throttle;
int tuned_turning;
boolean autonomous_mode;

void setup() {

pinMode(7, INPUT); // Set our input pins as such
pinMode(8, INPUT); // Set our input pins as such
pinMode(9, INPUT);          // sets the digital pin 13 as output
pinMode(3, OUTPUT);
pinMode(11, OUTPUT);

Serial.begin(9600); // Pour a bowl of Serial

}

void loop() {
  
  turning = pulseIn(7, HIGH, 25000);
  
  aux = pulseIn(8, HIGH, 25000);
  throttle = pulseIn(9, HIGH, 25000);


  Serial.print("throttle:");
  Serial.println(throttle);
  Serial.print("Turning:"); 
  Serial.println(turning);
  Serial.print("new throttle value:");
  tuned_throttle = (throttle*.116 + 1290);
  tuned_turning = (turning*.116 + 1280);
  Serial.println(tuned_throttle);
  
  if(aux>1500)
  {
    autonomous_mode = true;
    //digitalWrite(13, HIGH);       // sets the digital pin 13 on
    //Serial.println(aux);
    analogWrite(3, 1000);
    } 
  else
  {
    autonomous_mode = false;
    analogWrite(3, tuned_throttle);
    analogWrite(11, tuned_turning);
    }
  /* I found that Ch1 was my left switch and that it 
  floats around 900 in the off position and jumps to 
  around 1100 in the on position */


// Print the value of 
     // each channel
//
  Serial.print("Autonomous Mode:");
  Serial.println(autonomous_mode);

Serial.println(); //make some room

delay(500);// I put this here just to make the terminal 
           // window happier
}
