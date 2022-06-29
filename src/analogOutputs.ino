SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
int redLED = D5;
int greenLED = D6;
int blueLED = D7;

void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
  pinMode(blueLED, OUTPUT);
}

void loop() {
  //red
  delay(1000);
  analogWrite(redLED, 255);
  analogWrite(greenLED, 0);
  analogWrite(blueLED, 0);
  //orange
  delay(1000);
  analogWrite(redLED, 256);
  analogWrite(greenLED, 60);
  analogWrite(blueLED, 0);
  //yellow
  delay(1000);
  analogWrite(redLED, 255);
  analogWrite(greenLED, 255);
  analogWrite(blueLED, 0);
  //green
  delay(1000);
  analogWrite(redLED, 0);
  analogWrite(greenLED, 128);
  analogWrite(blueLED, 0);
  //blue
  delay(1000);
  analogWrite(redLED, 0);
  analogWrite(greenLED, 0);
  analogWrite(blueLED, 255);
  //purple
  delay(1000);
  analogWrite(redLED, 128);
  analogWrite(greenLED, 0);
  analogWrite(blueLED, 128);
  //cyan
  delay(1000);
  analogWrite(redLED, 0);
  analogWrite(greenLED, 255);
  analogWrite(blueLED, 255);
}