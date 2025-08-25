int testerPin = A5;
int resistVal;
int dt = 100;


int buzzerPin = 8;
int lightPin = 7;





void setup() {
  // put your setup code here, to run once:
  pinMode(testerPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(lightPin, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  resistVal = analogRead(testerPin);
  Serial.println();
  Serial.print("voltios pasando por el cable = ");
  Serial.print(resistVal);

  
  while(resistVal > 700){
    resistVal = analogRead(testerPin);
    
    Serial.println();
    Serial.print("voltios pasando por el cable = ");
    Serial.print(resistVal);

    digitalWrite(lightPin,  1);
    digitalWrite(buzzerPin, 1);

  }
  digitalWrite(lightPin, 0);
  digitalWrite(buzzerPin, 0);
  

  delay(dt);



}

