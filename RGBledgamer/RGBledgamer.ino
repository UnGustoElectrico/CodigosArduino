
//Pines led
int PIN_RED   = 9; 
int PIN_GREEN = 10; 
int PIN_BLUE  = 11; 
 

int red             = 253;
int green           = 1;
int blue            = 125;
int redDirection   = -1;
int greenDirection = 1;
int blueDirection  = -1;
 

void setColor(int RED, int GREEN, int BLUE) {
  analogWrite(PIN_RED,   RED);
  analogWrite(PIN_GREEN, GREEN);
  analogWrite(PIN_BLUE,  BLUE);
}
 
void setup() {
  
  pinMode(PIN_RED,   OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);
  pinMode(PIN_BLUE,  OUTPUT);
}
 
 
void loop() {
  red = red + redDirection;   
  green = green + greenDirection;
  blue = blue + blueDirection;
 
 
  if (red >= 255 || red <= 0)
    {
      redDirection = redDirection * -1;
    }
  if (green >= 255 || green <= 0)
    {
      greenDirection = greenDirection * -1;
    }
  if (blue >= 255 || blue <= 0)
  {
    blueDirection = blueDirection * -1;
  }
  setColor(red, green, blue);
  delay(5);   
}
