#include "ultrasonic.h"

ultrasonic::ultrasonic(byte trig, byte echo, byte vcc = 0,byte _delay = 5,int timeout = -1) {
    _trig = trig;
    _echo = echo;
    _vcc = vcc;
    __delay =_delay;
    _timeout = timeout;

    
    pinMode(_echo, INPUT);
    pinMode(_trig, OUTPUT);
    
    if (vcc != 0) {
        pinMode(_vcc, OUTPUT);
        digitalWrite(_vcc, HIGH); 
    }
}

float ultrasonic::readData() {
    delay(__delay);
    digitalWrite(_trig, LOW);
    delayMicroseconds(2);
    digitalWrite(_trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(_trig, LOW);

    _duration = pulseIn(_echo, HIGH,_timeout);

    return ((_duration * _speed) / 20000.0);
}

float ultrasonic::readData_m() {
    delay(__delay);
    digitalWrite(_trig, LOW);
    delayMicroseconds(2);
    digitalWrite(_trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(_trig, LOW);

    _duration = pulseIn(_echo, HIGH,_timeout);

    return (((_duration * _speed) / 20000.0))/100;
}

float ultrasonic::readData_cm() {
    delay(__delay);
    digitalWrite(_trig, LOW);
    delayMicroseconds(2);
    digitalWrite(_trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(_trig, LOW);

    _duration = pulseIn(_echo, HIGH,_timeout);

    return ((_duration * _speed) / 20000.0);
}

float ultrasonic::readData_inch() {
    delay(__delay);
    digitalWrite(_trig, LOW);
    delayMicroseconds(2);
    digitalWrite(_trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(_trig, LOW);

    _duration = pulseIn(_echo, HIGH,_timeout);

    return (((_duration * _speed) / 20000.0)*0.393701);
}

