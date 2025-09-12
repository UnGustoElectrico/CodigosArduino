
int WaterSensorPin = A0;
int LedPin = 8;

int WaterSensorVal;
int LedVal;


void setup() {
  // put your setup code here, to run once:
  pinMode(WaterSensorPin, INPUT);
  pinMode(LedPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  WaterSensorVal = analogRead(WaterSensorPin);
  Serial.println(WaterSensorVal);

  if (WaterSensorVal > 1) {

    digitalWrite(LedPin, 1);



  } else {

    digitalWrite(LedPin, 0);
  }
}
