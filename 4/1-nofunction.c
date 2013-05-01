int led = 13;

void setup() {
    pinMode(led, OUTPUT);
}

void loop() {
    // flash the LED 5 times
    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);

    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);

    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);

    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);

    digitalWrite(led, HIGH);
    delay(50);
    digitalWrite(led, LOW);
}
