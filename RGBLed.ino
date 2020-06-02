
#define BLUE 3
#define GREEN 5
#define RED 6


void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);

  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);

}

int red;
int green;
int blue;

void loop() {
  #define delayTime 10

  red = 225;
  green = 0;
  blue = 0;

  //changing the red to green gradually
  for(int i = 0; i<255; i++){
    red-=1;
    green+=1;

    analogWrite(RED, red);
    analogWrite(GREEN, green);
    delay(delayTime);
  }

  red = 0;
  green = 255;
  blue = 0;

  for(int i = 0; i<255; i++){
    green-=1;
    blue+=1;

    analogWrite(GREEN, green);
    analogWrite(BLUE, blue);
    delay(delayTime);
  }

  red = 0;
  green = 0;
  blue = 255;

  for(int i = 0; i<255; i++){
    blue-=1;
    red+=1;

    analogWrite(BLUE, blue);
    analogWrite(RED, red);
    delay(delayTime);
   }
  
}
