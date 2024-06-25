#ifndef ultrasonic_h
#define ultrasonic_h

#include <Arduino.h>

class ultrasonic {
  private:
    byte _trig;
    byte _echo;
    byte _vcc;
    const float _speed = 343.0;  // speed of sound
    unsigned long _duration;
    byte __delay;
    int _timeout;

  public:
    /*
     * Constructor to initialize the ultrasonic sensor.
     *
     * @param trig Pin connected to the trigger pin of the ultrasonic sensor.
     * @param echo Pin connected to the echo pin of the ultrasonic sensor.
     * @param vcc Pin connected to the VCC (power) of the sensor (optional, defaults to 0).
     * @param _delay Optional delay in milliseconds for sensor stabilization after triggering (defaults to 5ms).
     * @param timeout to set timeout to ultrasonic sesnor in milliseconds, set default as infinity.
     */
    ultrasonic(byte trig, byte echo, byte vcc = 0, byte _delay = 5,int timeout = -1);
  
    /*
     * Reads distance from the ultrasonic sensor and returns it in meters.
     *
     * @return Distance measured by the sensor in meters.
     */
    float readData();

    /*
     * Reads distance from the ultrasonic sensor and returns it in meters.
     * This is equivalent to readData() but named for clarity.
     *
     * @return Distance measured by the sensor in meters.
     */
    float readData_m();

    /*
     * Reads distance from the ultrasonic sensor and returns it in centimeters.
     *
     * @return Distance measured by the sensor in centimeters.
     */
    float readData_cm();

    /*
     * Reads distance from the ultrasonic sensor and returns it in inches.
     *
     * @return Distance measured by the sensor in inches.
     */
    float readData_inch();
};

#endif
