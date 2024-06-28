#include "ultrasonic.h"
ultrasonic ping(12,13,11,5,2);
void setup() {

Serial.begin(9600);
}

void loop() {

Serial.println(ping.readData());
delay(500);
}
