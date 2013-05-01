int RED = 3;
int GREEN = 5;
int BLUE = 6;

void setup() {
    pinMode(RED, OUTPUT);
    pinMode(GREEN, OUTPUT);
    pinMode(BLUE, OUTPUT);
}

void flashColor(int red, int green, int blue) {
    analogWrite(RED, red);
    analogWrite(GREEN, green);
    analogWrite(BLUE, blue);
    delay(50);
}

void loop() {
    flashColor(100, 150, 255);
    flashColor(200, 25, 100);
    flashColor(187, 201, 17);
}
