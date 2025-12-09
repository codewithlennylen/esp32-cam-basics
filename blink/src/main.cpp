#include <Arduino.h>
#include "esp_camera.h"

int cameraFlash = 4;

void setup()
{
  pinMode(cameraFlash, OUTPUT);
}

void loop()
{
  digitalWrite(cameraFlash, HIGH);
  delay(1000);
  digitalWrite(cameraFlash, LOW);
  delay(2000);
}
