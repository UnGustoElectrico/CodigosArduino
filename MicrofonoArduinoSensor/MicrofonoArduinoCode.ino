 
 int micPin = A0;
 float micVal;
 const int MaxVolume = 515;
 bool ledState = false;
 
 

 int ledPin = 9;

 void setup() {
  // put your setup code here, to run once:
  pinMode(micPin, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  micVal = analogRead(micPin);
  Serial.println(micVal);


  if (micVal > MaxVolume){
    ledState = !ledState;
    digitalWrite(ledPin, ledState);
    delay(400);

  }



}
