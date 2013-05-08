int forceSensorPin = A0;

void setup() {
    Serial.begin(9600);
}

void loop() {
    int force = analogRead(forceSensorPin);
    Serial.println(force);
}
