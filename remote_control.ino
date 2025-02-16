// Pin definitions
int motorA1 = 2; // IN1 on L298N
int motorA2 = 5; // IN2 on L298N
int motorB1 = 4; // IN3 on L298N
int motorB2 = 3; // IN4 on L298N
const int irPin = 8;

void setup() {
  // Initialize motor control pins as output
  Serial.begin(115200);
  pinMode(irPin, INPUT);
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);
  
}

void loop() {
 
  
  if(key==6368){
   digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);
  
  // Motor B Forward
  digitalWrite(motorB1, HIGH);
  digitalWrite(motorB2, LOW); 
  }
  if(key == 23198){
    digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, HIGH);
  
  // Motor B Forward
  digitalWrite(motorB1, HIGH);
  digitalWrite(motorB2, LOW); }
  if( key == 2288){
    digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);
  
  // Motor B Forward
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, HIGH); 
  }
  if(key == 7388){
    digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, HIGH);
  
  // Motor B Forward
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, HIGH); 
  }
  if(key == 24218){

    digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, LOW);
  
  // Motor B Forward
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, LOW); 
  }
  


  

}