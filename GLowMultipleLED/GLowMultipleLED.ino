
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
  // put your main code here, to run repeatedly:
  
  delay(1000);
  //Glowing All LEDs
  digitalWrite(LED1, HIGH);
  digitalWrite(LED2, HIGH);
  digitalWrite(LED4, HIGH);
  digitalWrite(LED5, HIGH);
  digitalWrite(LED3, HIGH);
  delay(400);

  //Turning off LED3
  digitalWrite(LED3, LOW);
  delay(200);
  digitalWrite(LED3, HIGH);
  delay(0);

  //Turning off LED2 and LED4
  digitalWrite(LED2, LOW);
  delay(0);
  digitalWrite(LED4, LOW);
  delay(500);

  //Turning On/Off LED2 and LED4
  digitalWrite(LED2, HIGH);
  digitalWrite(LED4, HIGH);

  //Blinking LED1 and LED5
  digitalWrite(LED3, HIGH);
  delay(200);
  digitalWrite(LED3, LOW);
  delay(0);
  

  
  //Turing off LED1 and LED5
  digitalWrite(LED1, LOW);
  delay(0);
  digitalWrite(LED5, LOW);
  delay(100);

  //Turning On LED2 and LED4
  digitalWrite(LED2, HIGH);
  delay(100);
  digitalWrite(LED4, HIGH);
  delay(100);

  //Turning off LED3
  digitalWrite(LED3, LOW);
  delay(200);
  digitalWrite(LED3, HIGH);
  delay(0);

  //Turning On LED2 and LED4
  digitalWrite(LED2, HIGH);
  //delay(100);
  digitalWrite(LED4, HIGH);
  //delay(100);
  
  
  
  
  
}
