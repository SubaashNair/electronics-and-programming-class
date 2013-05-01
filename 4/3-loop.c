int led = 13;

void setup() {
    pinMode(led, OUTPUT);
}

/* Flash the LED on the pin with a 100ms pause
 */
void flash(int pin) {
    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);
}

void loop() {
    // flash the LED 5 times
    for(int i = 0; i < 5; i++) {
        flash(led);
    }
}
