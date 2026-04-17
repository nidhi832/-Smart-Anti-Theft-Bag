int PIR = 2;
int tilt = 3;
int reed = 4;
int buzzer = 9;

int lastTilt = HIGH;

void setup() {
  pinMode(PIR, INPUT);
  pinMode(tilt, INPUT_PULLUP);
  pinMode(reed, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);
}

void loop() {

  int motion = digitalRead(PIR);
  int currentTilt = digitalRead(tilt);
  int state = digitalRead(reed);

  // -------- PRIORITY LOGIC --------
  if (motion == HIGH || state == HIGH) {
    digitalWrite(buzzer, LOW);   // 🔊 strong continuous sound
  }

  else if (lastTilt == HIGH && currentTilt == LOW) {
    digitalWrite(buzzer, LOW);
    delay(200);
    digitalWrite(buzzer, HIGH);
  }

  else {
    digitalWrite(buzzer, HIGH);  // OFF
  }

  lastTilt = currentTilt;
}