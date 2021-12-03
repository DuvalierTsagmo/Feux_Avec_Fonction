#include <Arduino.h>

long timerStart  = 0;
long timerTarget = 0;


void startTimer(int msec);
bool isTimerReady();

void startTimer(int msec) {
    timerStart = millis();
    timerTarget = msec;
}

bool isTimerReady() {
    return (millis() - timerStart) > timerTarget;
}