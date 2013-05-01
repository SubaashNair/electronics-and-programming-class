int BUTTON_PIN = 2;

void setup() {
  pinMode(BUTTON_PIN, INPUT);

  Serial.begin(9600);
}

void loop() {
  //Serial.println("Hello computer!");
  //Serial.print("This line will mash together with the next.");

  int buttonPressed = digitalRead(BUTTON_PIN);
  if(buttonPressed == 1) {
     Serial.println("I pressed the button, and the button is:");
     Serial.println(buttonPressed);
  }
}
