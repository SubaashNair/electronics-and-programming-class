/* Code to use a light sensor to control the brightness of an LED. This is
 * identical to the code for using an analog force sensor except that the range
 * of input values is different.
 */
int LED_PIN = 3;
int lightSensorPin = A0;

void setup() {
    pinMode(LED_PIN, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    // Read the light value from the analog input sensor
    int light = analogRead(lightSensorPin);
    Serial.print("Actual light level: ");
    Serial.print(light);

    // The input value for light is between 0 and 1023, but depending on the
    // size of your foam it will probably stay between 400 and 600. To control
    // the output of the LED, we need a number between 0 and 255.
    //
    // Map the input values to an output value (0 to 255)
    int ledValue = map(light, 190, 400, 0, 255);
    // The "map" function will return a negative value if we go outside of the
    // 440-600 range, and we don't want thing. This will make sure the output
    // value is always positive
    ledValue = max(0, ledValue);
    // Same idea, keep the value below 255
    ledValue = min(255, ledValue);

    Serial.print(", LED value: ");
    Serial.println(ledValue);

    // Control the LED brightness
    analogWrite(LED_PIN, ledValue);
}
