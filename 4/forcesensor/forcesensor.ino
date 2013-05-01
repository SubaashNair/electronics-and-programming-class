int led = 13;
int forceSensorPin = A0;

void setup() {
    pinMode(led, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    int force = analogRead(forceSensorPin);
    Serial.println(force);
}
