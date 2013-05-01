void setup() {
    pinMode(3, OUTPUT);
    pinMode(5, OUTPUT);
    pinMode(6, OUTPUT);
}

int RED = 3;
int GREEN = 5;
int BLUE = 6;

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
    // dimLED(BLUE);
    // dimLED(RED);
    // dimLED(GREEN);
    digitalWrite(BLUE, HIGH);
}
