int LED_PIN = 3;
int forceSensorPin = A0;

void setup() {
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    // Read the force value from the analog input sensor
    int force = analogRead(forceSensorPin);
    Serial.print("Actual force: ");
    Serial.print(force);

    // The input value for force is between 0 and 1023, but depending on the
    // size of your foam it will probably stay between 400 and 600. To control
    // the output of the LED, we need a number between 0 and 255.
    //
    // Map the input values (400 to 600) to an output value (0 to 255)
    int ledValue = map(force, 440, 600, 0, 255);
    // The "map" function will return a negative value if we go outside of the
    // 440-600 range, and we don't want thing. This will make sure the output
    // value is always positive
    ledValue = max(0, ledValue);

    Serial.print(", LED value: ");
    Serial.println(ledValue);

    // Control the LED brightness
    analogWrite(LED_PIN, ledValue);
}
