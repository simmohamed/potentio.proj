#include <Arduino.h>
#include "potentio.h"

int potentiometer = 0;
int potval;
const int pinA;
const int pinB;
const int pinC;
const int pinD;
const int pinE;
const int pinF;
const int pinJ;

Potentio::Potentio(int pinA,int pinB,int pinC,int pinD,int pinE,int pinF,int pinJ,int pinP)
{
pinMode(pinA, OUTPUT);
_pinA = pinA;
pinMode(pinB, OUTPUT);
_pinB = pinB;
pinMode(pinC, OUTPUT);
_pinC = pinC;
pinMode(pinD, OUTPUT);
_pinD = pinD;
pinMode(pinE, OUTPUT);
_pinE = pinE;
pinMode(pinF, OUTPUT);
_pinF = pinF;
pinMode(pinJ, OUTPUT);
_pinJ = pinJ;
//pinMode(pinP, INPUT);
_pinP = pinP;
}
void Potentio::num0(){
  int potval=analogRead(potentiometer);
  if (potval>=0 && potval<=101){
    digitalWrite(pinA, LOW);   
    digitalWrite(pinB, LOW);   
    digitalWrite(pinC, LOW);   
    digitalWrite(pinD, LOW);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, LOW);   
    digitalWrite(pinJ, HIGH);  
}
}
void Potentio::num1(){
  int potval=analogRead(potentiometer);
  if (potval>=102 && potval<=203){
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, LOW);   
    digitalWrite(pinC, LOW);   
    digitalWrite(pinD, HIGH);   
    digitalWrite(pinE, HIGH);   
    digitalWrite(pinF, HIGH);   
    digitalWrite(pinJ, HIGH);
  }
}
void Potentio::num2(){
  int potval=analogRead(potentiometer);
  if (potval>=204 && potval<=305){
    digitalWrite(pinA, LOW);   
    digitalWrite(pinB, LOW);   
    digitalWrite(pinC, HIGH);   
    digitalWrite(pinD, LOW);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, HIGH);   
    digitalWrite(pinJ, LOW);
  }  
}
void Potentio::num3(){
  int potval=analogRead(potentiometer);
  if (potval>=306 && potval<=407){
    digitalWrite(pinA, LOW);   
    digitalWrite(pinB, LOW);   
    digitalWrite(pinC, LOW);   
    digitalWrite(pinD, LOW);   
    digitalWrite(pinE, HIGH);   
    digitalWrite(pinF, HIGH);   
    digitalWrite(pinJ, LOW);
  }
}
void Potentio::num4(){
  int potval=analogRead(potentiometer);
  if (potval>=408 && potval<=509){
    digitalWrite(pinA, HIGH);   
    digitalWrite(pinB, LOW);   
    digitalWrite(pinC, LOW);   
    digitalWrite(pinD, HIGH);   
    digitalWrite(pinE, HIGH);   
    digitalWrite(pinF, LOW);   
    digitalWrite(pinJ, LOW);
  }
}
void Potentio::num5(){
  int potval=analogRead(potentiometer);
  if (potval>=510 && potval<=611){
    digitalWrite(pinA, LOW);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, LOW);   
    digitalWrite(pinD, LOW);   
    digitalWrite(pinE, HIGH);   
    digitalWrite(pinF, LOW);   
    digitalWrite(pinJ, LOW);
  }
}
void Potentio::num6(){
  int potval=analogRead(potentiometer);
  if (potval>=612 && potval<=713){
    digitalWrite(pinA, LOW);   
    digitalWrite(pinB, HIGH);   
    digitalWrite(pinC, LOW);   
    digitalWrite(pinD, LOW);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, LOW);   
    digitalWrite(pinJ, LOW);
  }
}
void Potentio::num7(){
int  potval=analogRead(potentiometer);
  if (potval>=714 && potval<=815){
    digitalWrite(pinA, LOW);   
    digitalWrite(pinB, LOW);   
    digitalWrite(pinC, LOW);   
    digitalWrite(pinD, HIGH);   
    digitalWrite(pinE, HIGH);   
    digitalWrite(pinF, HIGH);   
    digitalWrite(pinJ, HIGH);
  }
}
void Potentio::num8(){
int  potval=analogRead(potentiometer);
  if (potval>=816 && potval<=917){
    digitalWrite(pinA, LOW);   
    digitalWrite(pinB, LOW);   
    digitalWrite(pinC, LOW);   
    digitalWrite(pinD, LOW);   
    digitalWrite(pinE, LOW);   
    digitalWrite(pinF, LOW);   
    digitalWrite(pinJ, LOW);
  }
}
void Potentio::num9(){
int  potval=analogRead(potentiometer);
  if (potval>=917 && potval<=1023){
    digitalWrite(pinA, LOW);   
    digitalWrite(pinB, LOW);   
    digitalWrite(pinC, LOW);   
    digitalWrite(pinD, LOW);   
    digitalWrite(pinE, HIGH);   
    digitalWrite(pinF, LOW);   
    digitalWrite(pinJ, LOW);
  }
   else {
    digitalWrite(13, HIGH);
  }
  }
