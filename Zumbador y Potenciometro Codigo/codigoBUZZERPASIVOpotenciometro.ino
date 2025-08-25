 int buzzpin = 4;
 float buzzDelay;
 int potPin = A4;
 int potVal;



 
 
 
 void setup() {
  // put your setup code here, to run once:
  pinMode(buzzpin, OUTPUT);
  pinMode(potPin, INPUT);
 
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedl

  potVal = analogRead(potPin);
  buzzDelay = (9940./1023.)*potVal + 60;
  
  


  digitalWrite(buzzpin, HIGH);
  delayMicroseconds(buzzDelay);
  digitalWrite(buzzpin, LOW);
  delayMicroseconds(buzzDelay);

  
  



  Serial.println(potVal);
  

  



}
