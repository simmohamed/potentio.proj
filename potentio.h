#ifndef potentio_h
#define potentio_h

#include "Arduino.h"

class Potentio
{
  public:
    Potentio(int pinA,int pinB,int pinC,int pinD,int pinE,int pinF,int pinJ,int pinP);
    void num0();
    void num1();
    void num2();
    void num3();
    void num4();
    void num5();
    void num6();
    void num7();
    void num8();
    void num9();
  private:
    int _pinA;
    int _pinB;
    int _pinC;
    int _pinD;
    int _pinE;
    int _pinF;
    int _pinJ;
    int _pinP;
};

#endif
