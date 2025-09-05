#define STEPPER_PIN_1 9 //pines
#define STEPPER_PIN_2 10
#define STEPPER_PIN_3 11
#define STEPPER_PIN_4 12

int dt = 5; //velocidad del motor


int step_number = 0; // numero de pasos

int ButtonPin = A0;
int ButtonVal;

int ChangeMotorVal = 0;
bool CanPress = true;


void setup() {
  //configura pines
pinMode(STEPPER_PIN_1, OUTPUT);
pinMode(STEPPER_PIN_2, OUTPUT);
pinMode(STEPPER_PIN_3, OUTPUT);
pinMode(STEPPER_PIN_4, OUTPUT);
Serial.begin(9600);
pinMode(ButtonPin, INPUT);

}

void loop() {

  ButtonVal = digitalRead(ButtonPin);
  Serial.println(ChangeMotorVal);



  OneStep(ChangeMotorVal);
  delay(dt);
  if (ButtonVal == 0 && CanPress){

    CanPress = false;
    ChangeMotorVal++;
    delay(200);
    CanPress = true;

    


  }
  if (ChangeMotorVal > 2){
      ChangeMotorVal = 0;
  }
 
  

}


void OneStep(int Value){
    if(Value == 0){
switch(step_number){
  case 0:
  digitalWrite(STEPPER_PIN_1, HIGH);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, LOW);
  break;
  case 1:
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, HIGH);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, LOW);
  break;
  case 2:
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, HIGH);
  digitalWrite(STEPPER_PIN_4, LOW);
  break;
  case 3:
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, HIGH);
  break;
} 


  }else if (Value == 1){
    switch(step_number){
  case 0:
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, HIGH);
  break;
  case 1:
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, HIGH);
  digitalWrite(STEPPER_PIN_4, LOW);
  break;
  case 2:
  digitalWrite(STEPPER_PIN_1, LOW);
  digitalWrite(STEPPER_PIN_2, HIGH);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, LOW);
  break;
  case 3:
  digitalWrite(STEPPER_PIN_1, HIGH);
  digitalWrite(STEPPER_PIN_2, LOW);
  digitalWrite(STEPPER_PIN_3, LOW);
  digitalWrite(STEPPER_PIN_4, LOW);
    }
  }
  
  
  else if (Value == 2){
    switch(step_number){
  case 0:
  digitalWrite(STEPPER_PIN_1, 0);
  digitalWrite(STEPPER_PIN_2, 0);
  digitalWrite(STEPPER_PIN_3, 0);
  digitalWrite(STEPPER_PIN_4, 0);
  break;
  case 1:
  digitalWrite(STEPPER_PIN_1, 0);
  digitalWrite(STEPPER_PIN_2, 0);
  digitalWrite(STEPPER_PIN_3, 0);
  digitalWrite(STEPPER_PIN_4, 0);
  break;
  case 2:
  digitalWrite(STEPPER_PIN_1, 0);
  digitalWrite(STEPPER_PIN_2, 0);
  digitalWrite(STEPPER_PIN_3, 0);
  digitalWrite(STEPPER_PIN_4, 0);
  break;
  case 3:
  digitalWrite(STEPPER_PIN_1, 0);
  digitalWrite(STEPPER_PIN_2, 0);
  digitalWrite(STEPPER_PIN_3, 0);
  digitalWrite(STEPPER_PIN_4, 0);
 
  
} 
  }
step_number++; //aumentar los pasos para seguir girando
  if(step_number > 3){
    step_number = 0;
  }
}
