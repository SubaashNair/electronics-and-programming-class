example-bad-code

int LED_PIN = 13
BUTTON_PIN = 3;

setup() {
    PinMode(LED_PIN, output);
    pinMode(button_pin, INPUT);
}

void blink(times) {
    for(int i = 0; i < times; i++) {
        DigitalWrite(LED_PIN, HIGH)
        delay(500);
        digitalWrite(LED_PIN, LOW);
    }
}

void loop
    int buttonStatus = digitalRead(BUTTON_PIN);
    if() buttonStatus = HIGH {
        blink(3)
    }
}
