const int trigpin=9;
const int echopin=10;
long duration;
int distance;
 

void setup() {
 Serial.begin(9600);
 pinMode(trigpin,OUTPUT);
 pinMode(echopin,INPUT);
}

void loop() {
  digitalWrite(trigpin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  
  duration=pulseIn(echopin,HIGH);
  distance=duration*0.034/2;
   Serial.print("distance : ");
   Serial.print(distance);
  Serial.println("cm");
  delay(1000);
  
  // put your main code here, to run repeatedly:

}
