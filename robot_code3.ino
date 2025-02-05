// Motor A connections
int leftMotorForward = 6; // D6
int leftMotorBackward = 5; // D5
int rightMotorForward = 11; //D11
int rightMotorBackward = 10; //D10

int button = 14;
int button2 = 15;

int val = 0;

// left motor pins where 6forward, 5 backwards
// right motor pins are 11forward 10, backwards

void motor_setup() {
  // Set all the motor control pins to outputs
	pinMode(leftMotorForward, OUTPUT);
	pinMode(leftMotorBackward, OUTPUT);
  
  pinMode(rightMotorForward, OUTPUT);
	pinMode(rightMotorBackward, OUTPUT);
  
	// Turn off motors - Initial state

	digitalWrite(leftMotorForward, LOW);
	digitalWrite(leftMotorBackward, LOW);
  
  digitalWrite(rightMotorForward, LOW);
	digitalWrite(rightMotorBackward, LOW);
}

void move(int dir,int t) {
  if (dir == 0) {
    	// Move forewards
  	digitalWrite(leftMotorForward, HIGH);
	  digitalWrite(leftMotorBackward, LOW);

    digitalWrite(rightMotorForward, HIGH);
	  digitalWrite(rightMotorBackward, LOW);
  }

  else if (dir == 1) {
    	// Move backwards
	  digitalWrite(leftMotorForward, LOW);
	  digitalWrite(leftMotorBackward, HIGH);

    digitalWrite(rightMotorForward, LOW);
	  digitalWrite(rightMotorBackward, HIGH);
  }
  else if (dir == 2) {
    	// Turn Right
	  digitalWrite(leftMotorForward, HIGH);
	  digitalWrite(leftMotorBackward, LOW);

    digitalWrite(rightMotorForward, LOW);
	  digitalWrite(rightMotorBackward, HIGH);
  }
  else if (dir == 3) {
    	// Turn Left
	  digitalWrite(leftMotorForward, LOW);
	  digitalWrite(leftMotorBackward, HIGH);

    digitalWrite(rightMotorForward, HIGH);
	  digitalWrite(rightMotorBackward, LOW);
  }
  
  delay(t);
}




void setup() {
  // Setup
  motor_setup();
  Serial.begin(9600);
}

void loop() {
  // Loop forever

  // Foreward = 1, Backwards = 2, Left = 3, Right = 4
move(0,1000);
move(1,1000);

  // move(2,1000);
  // move(3,1000);

//if (analogRead(button) == 0) {
//  move(0,1000);
//} else {
//  move(1,1000);
//}

  // Serial.println(analogRead(button));
  //Serial.println("and");
  //Serial.println(analogRead(button2));
  //delay(1000);
 
}
