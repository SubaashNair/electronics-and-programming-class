
/*
Adafruit Arduino - Lesson 4. 8 LEDs and a Shift Register
*/

int latchPin = 5;
int clockPin = 6;
int dataPin = 4;
int lightPin = A0;

byte leds = 0;

void setup()
{
  pinMode(latchPin, OUTPUT);
  pinMode(dataPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(lightPin, INPUT);
  Serial.begin(9600);
}

void updateShiftRegister()
{
   digitalWrite(latchPin, LOW);
   shiftOut(dataPin, clockPin, LSBFIRST, leds);
   digitalWrite(latchPin, HIGH);
}

void loop()
{
  leds = 0;
  updateShiftRegister();
  /* delay(500); */
  for (int i = 0; i < map(analogRead(lightPin), 40, 115, 0, 7); i++)
  {
    bitSet(leds, i);
    updateShiftRegister();
  }
}

