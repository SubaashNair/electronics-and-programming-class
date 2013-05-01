int RED = 3;
int GREEN = 5;
int BLUE = 6;

void setup() {
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
}


/** Dims an LED on the pin up to max brightness, then back down to off.
 */
void dimLED(int pin) {
    for(int i = 0; i <= 255; i++) {
        analogWrite(pin, i);
        delay(1);
    }

    for(int i = 255; i > 0; i--) {
        analogWrite(pin, i);
        delay(1);
    }
}

void loop() {
    dimLED(BLUE);
    dimLED(RED);
    dimLED(GREEN);
}
