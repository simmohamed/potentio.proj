#define LED1 7
#define LED2 6
#define LED3 5
#define LED4 4
#define LED5 3 
#define LEDOFF LOW
#define LEDON HIGH

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  digitalWrite(LED1, LEDOFF);
  digitalWrite(LED2, LEDOFF);
  digitalWrite(LED3, LEDOFF);
  digitalWrite(LED4, LEDOFF);
  digitalWrite(LED5, LEDOFF);
 
}

#define VIIVE 200
void loop() {
   digitalWrite(LED1, LEDON);
   delay(VIIVE);
  // digitalWrite(LED1, LEDOFF);
  // delay(VIIVE);
   digitalWrite(LED2, LEDON);
   delay(VIIVE);
  // digitalWrite(LED2, LEDOFF);
  // delay(VIIVE);
   digitalWrite(LED3, LEDON);
   delay(VIIVE);
   //digitalWrite(LED3, LEDOFF);
   //delay(VIIVE);
   digitalWrite(LED4, LEDON);
   delay(VIIVE);
   //digitalWrite(LED4, LEDOFF);
   //delay(VIIVE);
   digitalWrite(LED5, LEDON);
   delay(VIIVE);
   //digitalWrite(LED5, LEDOFF);
   //delay(VIIVE);
   digitalWrite(LED5, LEDOFF);
   delay(VIIVE);
  // digitalWrite(LED1, LEDOFF);
  // delay(VIIVE);
   digitalWrite(LED4, LEDOFF);
   delay(VIIVE);
  // digitalWrite(LED2, LEDOFF);
  // delay(VIIVE);
   digitalWrite(LED3, LEDOFF);
   delay(VIIVE);
   //digitalWrite(LED3, LEDOFF);
   //delay(VIIVE);
   digitalWrite(LED2, LEDOFF);
   delay(VIIVE);
   //digitalWrite(LED4, LEDOFF);
   //delay(VIIVE);
   digitalWrite(LED1, LEDOFF);
   delay(VIIVE);
   //digitalWrite(LED5, LEDOFF);
   //delay(VIIVE);
}
