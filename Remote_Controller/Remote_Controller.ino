#include <RH_ASK.h>
#include <SPI.h>

RH_ASK driver;

int xPin = A0;
int yPin = A1;

void setup() {

  Serial.begin(9600);

  if (!driver.init()) {
    Serial.println("init failed");
  }

}

void loop() {

  int xValue = analogRead(xPin);
  int yValue = analogRead(yPin);

  char msg[10] = "STOP";

  bool forward  = (xValue > 600);
  bool backward = (xValue < 400);
  bool left     = (yValue < 400);
  bool right    = (yValue > 600);

  if (forward && left) {
    strcpy(msg, "FWD_L");
  }

  else if (forward && right) {
    strcpy(msg, "FWD_R");
  }

  else if (backward && left) {
    strcpy(msg, "BWD_L");
  }

  else if (backward && right) {
    strcpy(msg, "BWD_R");
  }

  else if (forward) {
    strcpy(msg, "FORWARD");
  }

  else if (backward) {
    strcpy(msg, "BACKWARD");
  }

  else if (left) {
    strcpy(msg, "LEFT");
  }

  else if (right) {
    strcpy(msg, "RIGHT");
  }

  else {
    strcpy(msg, "STOP");
  }

  driver.send((uint8_t *)msg, strlen(msg));
  driver.waitPacketSent();

  Serial.println(msg);

  delay(30);
}