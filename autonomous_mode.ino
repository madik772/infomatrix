// Pin definitions
int motorA1 = 2; // IN1 on L298N
int motorA2 = 5; // IN2 on L298N
int motorB1 = 4; // IN3 on L298N
int motorB2 = 3; // IN4 on L298N
const int irPin = 8;

void setup() {
  // Initialize motor control pins as output
  pinMode(motorA1, OUTPUT);
  pinMode(motorA2, OUTPUT);
  pinMode(motorB1, OUTPUT);
  pinMode(motorB2, OUTPUT);
  
}

void loop() {

  // autonomous
  // Motor A Forward
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);
  
   //Motor B Forward
  digitalWrite(motorB1, HIGH);
  digitalWrite(motorB2, LOW);
  
  delay(5000); // run motors for 2 seconds
  
   //Motor A Reverse
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, HIGH);
  
  // Motor B Reverse
  digitalWrite(motorB1, HIGH);
  digitalWrite(motorB2, LOW);
  
  delay(2000); // run motors for 2 seconds
    // Motor A Forward
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);
  
   //Motor B Forward
  digitalWrite(motorB1, HIGH);
  digitalWrite(motorB2, LOW);
  
  delay(5000); // run motors for 2 seconds
    // Motor A Reverse
  digitalWrite(motorA1, HIGH);
  digitalWrite(motorA2, LOW);
  
   //Motor B Reverse
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, HIGH);
  
  delay(3000); // run motors for 2 seconds
  
   //Stop both motors
  digitalWrite(motorA1, LOW);
  digitalWrite(motorA2, LOW);
  digitalWrite(motorB1, LOW);
  digitalWrite(motorB2, LOW);
  delay(500);
 
}