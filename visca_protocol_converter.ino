// https://www.brainy-bits.com/post/wireless-arduino-controlled-ptz-camera-system

// VISCA Signal Convertor for Bescor MP-101 or MaxWell MP-101
// BMD Micro Studio 4K

// Indicator to check the board is working
const int LED = 13;

// Digital Pins are reserved for VISCA Protocol


// Analog Pins for MP-101
const int UP = A1, // BLACK, Up
COM = A2, // WHITE, COM
DOWN = A3, // BLUE, Down
TILT_SPEED = A4, // RED, Volume (Up & Down Speed)
LEFT = A5, // YELLOW, Left
RIGHT = A6, // GREEN, Right
PAN_SPEED = A7; // PURPLE, Volume (Left & Right Speed)

void setup() {
  pinMode(LED, OUTPUT);

  pinMode(UP, OUTPUT);
  pinMode(COM, OUTPUT);
  pinMode(DOWN, OUTPUT);
  pinMode(TILT_SPEED, OUTPUT);
  pinMode(LEFT, OUTPUT);
  pinMode(RIGHT, OUTPUT);
  pinMode(PAN_SPEED, OUTPUT);

  digitalWrite(UP, LOW);
  digitalWrite(DOWN, LOW);
  digitalWrite(LEFT, LOW);
  digitalWrite(RIGHT, LOW);

  analogWrite(TILT_SPEED, 50);
  analogWrite(PAN_SPEED, 50);
}

void loop() {
  // Phase 1
  digitalWrite(LED, HIGH);

  digitalWrite(DOWN, LOW);
  analogWrite(UP, 255);

  delay(5000);

  // Phase 2
  digitalWrite(LED, LOW);

  digitalWrite(UP, LOW);
  analogWrite(DOWN, 255);

  delay(5000);
}
