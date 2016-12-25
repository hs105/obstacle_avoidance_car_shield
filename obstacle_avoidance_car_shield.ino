const int L298N_IN1 = 11;
const int L298N_IN2 = 10;
const int L298N_IN3 = 9;
const int L298N_IN4 = 8;

//const int trigPin = 13;
//const int echoPin = 12;
//float travelTime = 0;
//const float speedOfSound = 776.5;//miles per hour
//float distance = 0;
  
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
//  pinMode(trigPin, OUTPUT);
//  pinMode(echoPin, INPUT);

  pinMode(L298N_IN1, OUTPUT);
  pinMode(L298N_IN2, OUTPUT);
  pinMode(L298N_IN3, OUTPUT);
  pinMode(L298N_IN4, OUTPUT);
}


void forward(){
    digitalWrite(L298N_IN1, HIGH);
    digitalWrite(L298N_IN2, LOW);
    digitalWrite(L298N_IN3, LOW);
    digitalWrite(L298N_IN4, HIGH);
}

void backward(){
    digitalWrite(L298N_IN1, LOW);
    digitalWrite(L298N_IN2, HIGH);
    digitalWrite(L298N_IN3, HIGH);
    digitalWrite(L298N_IN4, LOW);
}

void turn_right(){
    digitalWrite(L298N_IN1, HIGH);
    digitalWrite(L298N_IN2, LOW);
    digitalWrite(L298N_IN3, HIGH);
    digitalWrite(L298N_IN4, LOW);
}

void turn_left(){
    digitalWrite(L298N_IN1, LOW);
    digitalWrite(L298N_IN2, HIGH);
    digitalWrite(L298N_IN3, LOW);
    digitalWrite(L298N_IN4, HIGH);
}



void loop() {
  backward();
  
 
//  digitalWrite(trigPin, LOW);
//  delayMicroseconds(2000);
//
//  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(15);
//
//  digitalWrite(trigPin, LOW);
//  delayMicroseconds(10);
//
//  travelTime = pulseIn(echoPin, HIGH);
//  travelTime /= 1000000;
//  travelTime /= 3600;
//
//  distance = speedOfSound * travelTime / 2.0;
//  distance *= (1.60934 * 1000 * 100); 
//  Serial.println(distance);

}
