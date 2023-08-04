// Ultrasonic Range Sensor

//Start of code

int trigPIN;
int echoPIN;
long time;
int distance;

/*Learnt that setup is typically one of the loops that
 is used in an Arduino which runs once */

void setup(){
  pinMode(10, OUTPUT);//Trig pin
  pinMode(9, INPUT);//Echo pin
  Serial.begin(9600);//to begin communication
}

void loop()//repeats continuously 
{
  digitalWrite(10,LOW);//Trig pin set low
  delayMicroseconds(2);
  
  digitalWrite(10, HIGH);
  delayMicroseconds(10);
  digitalWrite(10, LOW);
  
  //distance
  time= pulseIn(9, HIGH);//time of flight
  distance = time*0.034/2;//distance of object by speed of sound
  
  //printing distance
  Serial.print("Distance: ");
  Serial.println(distance);
}
//end of code