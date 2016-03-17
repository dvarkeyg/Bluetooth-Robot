

int leftWheelPos = 12
int leftWheelNeg = 11
int rightWheelPos = 10
int rightWheelNeg = 9
int enable = 8

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(leftWheelPos, OUTPUT)
  pinMode(leftWheelNeg, OUTPUT)
  pinMode(rightWheelPos, OUTPUT)
  pinMode(rightWheelNeg, OUTPUT)
  pinMode(enable, OUTPUT)
  digitalWrite(enable, OUTPUT)
  Serial.begin(9600)
    
}

// the loop routine runs over and over again forever:
void loop() {
  
  if(Serial.available())
  {
     command = Serial.read()
  }
   if(command == 'F')
   {
     moveForward()
   }
   else if (command == 'B') 
   {
     moveBackward()
   }
   else if (command == 'L')
   {
     turnLeft()
   }
   else if (command == 'R')
   {
     turnRight()
   }
   else
   {
     idle()
   }
   delay(10);  
}

void turnLeft(){
  digitalWrite(leftWheelNeg, HIGH)
  digitalWrite(leftWheelPos, LOW)
  digitalWrite(rightWheelNeg, LOW)
  digitalWrite(rightWheelPos, HIGH)
}

void turnRight(){
  digitalWrite(leftWheelNeg, LOW)
  digitalWrite(leftWheelPos, HIGH)
  digitalWrite(rightWheelNeg, HIGH
  digitalWrite(rightWheelPos, LOW)
}

void moveForward(){
  digitalWrite(leftWheelPos, HIGH)
  digitalWrite(leftWheelNeg, LOW)
  digitalWrite(rightWheelPos, HIGH)
  digitalWrite(rightWheelNeg, LOW)
}

void moveBackward(){
  digitalWrite(leftWheelNeg, HIGH)
  digitalWrite(leftWheelPos, LOW)
  digitalWrite(rightWheelNeg, HIGH)
  digitalWrite(rightWheelPos, LOW)
}

void idle(){
  digitalWrite(leftWheelNeg, LOW)
  digitalWrite(leftWheelPos, LOW)
  digitalWrite(rightWheelNeg, LOW)
  digitalWrite(rightWheelPos, LOW)
}
