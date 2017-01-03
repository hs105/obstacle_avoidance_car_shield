#include <Servo.h>

const int L298N_IN1 = 11;
const int L298N_IN2 = 10;
const int L298N_IN3 = 9;
const int L298N_IN4 = 8;

//const int L298N_ENA = 5;
//const int L298N_ENB = 3;

Servo sr04_servo;
const int SERVO_PIN = 6;


const int TRIG_PIN = 13;
const int ECHO_PIN = 12;
float travelTime = 0;
const float SPEED_OF_SOUND = 776.5;//miles per hour

const int DEGREE_AHEAD = 85;
const int DEGREE_LEFT = 120;
const int DEGREE_RIGHT = 50;
//const int WHEEL_SPEED = 1023;  

void setup() {
    Serial.begin(9600); 
    pinMode(TRIG_PIN, OUTPUT);
    pinMode(ECHO_PIN, INPUT);
  
    pinMode(L298N_IN1, OUTPUT);
    pinMode(L298N_IN2, OUTPUT);
    pinMode(L298N_IN3, OUTPUT);
    pinMode(L298N_IN4, OUTPUT);
//    pinMode(L298N_ENA, OUTPUT);
//    pinMode(L298N_ENB, OUTPUT);
  
    sr04_servo.attach(SERVO_PIN);
    sr04_servo.write(DEGREE_AHEAD);

    delay(2000);
    distance();
    delay(100);
    distance();
    delay(100);
    distance();
    delay(100);
    distance();
    delay(100);
}

void stop(){
    digitalWrite(L298N_IN1, LOW);
    digitalWrite(L298N_IN2, LOW);
    digitalWrite(L298N_IN3, LOW);
    digitalWrite(L298N_IN4, LOW);
}

void forward(){
    digitalWrite(L298N_IN1, HIGH);
    digitalWrite(L298N_IN2, LOW);
    digitalWrite(L298N_IN3, LOW);
    digitalWrite(L298N_IN4, HIGH);
//    analogWrite(L298N_ENA, WHEEL_SPEED);
//    analogWrite(L298N_ENB, WHEEL_SPEED);
}

void backward(){
    digitalWrite(L298N_IN1, LOW);
    digitalWrite(L298N_IN2, HIGH);
    digitalWrite(L298N_IN3, HIGH);
    digitalWrite(L298N_IN4, LOW);
//    analogWrite(L298N_ENA, WHEEL_SPEED);
//    analogWrite(L298N_ENB, WHEEL_SPEED);
}

void turn_right(){
    digitalWrite(L298N_IN1, HIGH);
    digitalWrite(L298N_IN2, LOW);
    digitalWrite(L298N_IN3, HIGH);
    digitalWrite(L298N_IN4, LOW);
    delay(300);
    forward();
}

void turn_left(){
    digitalWrite(L298N_IN1, LOW);
    digitalWrite(L298N_IN2, HIGH);
    digitalWrite(L298N_IN3, LOW);
    digitalWrite(L298N_IN4, HIGH);
    delay(300);
    forward();
}

int right_space(){
    sr04_servo.write(DEGREE_RIGHT);
//    delay(500);
    float dist = distance();
//    sr04_servo.write(DEGREE_AHEAD);
//    delay(100);
    return dist;
}

int left_space(){
    sr04_servo.write(DEGREE_LEFT);
//    delay(500);
    float dist = distance();
//    sr04_servo.write(DEGREE_AHEAD);
//    delay(100);
    return dist;
}


int distance(){
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2000);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(15);

  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(10);

  travelTime = pulseIn(ECHO_PIN, HIGH);
  travelTime /= 1000000;
  travelTime /= 3600;

  float distance = SPEED_OF_SOUND * travelTime / 2.0;
  distance *= (1.60934 * 1000 * 100); 
  return distance;
}


void loop() {
  sr04_servo.write(DEGREE_AHEAD);
  delay(100);
  float front_dist = distance();
  Serial.print("front_dist=");
  Serial.println(front_dist);
  if(front_dist < 20){
      stop();
      delay(100);
      backward();
      delay(100);
      stop();
      delay(100);
      float left_dist = left_space();
      delay(500);
      float right_dist = right_space();
      Serial.print("left_dist = ");
      Serial.println(left_dist);
      Serial.print("right_dist = ");
      Serial.println(right_dist);
      if(left_dist > right_dist){
          turn_left();  
          Serial.println("turn left!");
      }else{
          turn_right();  
          Serial.println("turn right!");
      }
      stop();
  }else{
    forward();  
  }
}
