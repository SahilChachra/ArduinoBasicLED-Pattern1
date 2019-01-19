int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4= 10;
int LED5 = 9;



void setup() {

  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
}

void loop() {

  delay(800);
  //Turning All LEDs On
  digitalWrite(LED1,HIGH);
  delay(150);
  digitalWrite(LED2,HIGH);
  delay(150);
  digitalWrite(LED3,HIGH);
  delay(150);
  digitalWrite(LED4,HIGH);
  delay(150);
  digitalWrite(LED5,HIGH);
  delay(150);
  
  //Turing all LEDs Off
  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);

  //Turning on Off LEDs 2,3,4,5
  
  digitalWrite(LED2,HIGH);
  delay(150);
  digitalWrite(LED3,HIGH);
  delay(150);
  digitalWrite(LED4,HIGH);
  delay(150);
  digitalWrite(LED5,HIGH);
  delay(150);

  digitalWrite(LED2,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);

  //Turing On Off LEDs 3,4 and 5
  digitalWrite(LED3,HIGH);
  delay(150);
  digitalWrite(LED4,HIGH);
  delay(150);
  digitalWrite(LED5,HIGH);
  delay(150);

  digitalWrite(LED3,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);

  //Turning On oFf LEDs 4,5
  digitalWrite(LED4,HIGH);
  delay(150);
  digitalWrite(LED5,HIGH);
  delay(150);
  
  digitalWrite(LED4,LOW);
  digitalWrite(LED5,LOW);

  //Turning On Off Led 5
  digitalWrite(LED5,HIGH);
  delay(150);
  digitalWrite(LED5,LOW);

  //************REVERSING THE PATTERN*********//

  delay(500);
  //Turning All LEDs On
  digitalWrite(LED5, HIGH);
  delay(150);
  digitalWrite(LED4,HIGH);
  delay(150);
  digitalWrite(LED3,HIGH);
  delay(150);
  digitalWrite(LED2,HIGH);
  delay(150);
  digitalWrite(LED1,HIGH);
  delay(150);

  //Turing all LEDs Off
  digitalWrite(LED5,LOW);
  digitalWrite(LED4,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED1,LOW);

  //Turning on Off LEDs 4,3,2,1
  
  digitalWrite(LED4,HIGH);
  delay(150);
  digitalWrite(LED3,HIGH);
  delay(150);
  digitalWrite(LED2,HIGH);
  delay(150);
  digitalWrite(LED1,HIGH);
  delay(150);

  digitalWrite(LED4,LOW);
  digitalWrite(LED3,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED1,LOW);

  //Turing On Off LEDs 3,2,1
  digitalWrite(LED3,HIGH);
  delay(150);
  digitalWrite(LED2,HIGH);
  delay(150);
  digitalWrite(LED1,HIGH);
  delay(150);

  digitalWrite(LED3,LOW);
  digitalWrite(LED2,LOW);
  digitalWrite(LED1,LOW);

  //Turning On off LEDs 2,1
  digitalWrite(LED2,HIGH);
  delay(150);
  digitalWrite(LED1,HIGH);
  delay(150);
  
  digitalWrite(LED2,LOW);
  digitalWrite(LED1,LOW);

  //Turning On Off Led 1
  digitalWrite(LED1,HIGH);
  delay(150);
  digitalWrite(LED1,LOW);
  
  
}
