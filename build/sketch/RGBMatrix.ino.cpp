#include <Arduino.h>
#line 1 "c:\\Users\\jamieho\\OneDrive2\\OneDrive\\repo\\RGBMatrix\\RGBMatrix.ino"
#line 1 "c:\\Users\\jamieho\\OneDrive2\\OneDrive\\repo\\RGBMatrix\\RGBMatrix.ino"
#include "RGBMatrix.h"

#line 3 "c:\\Users\\jamieho\\OneDrive2\\OneDrive\\repo\\RGBMatrix\\RGBMatrix.ino"
void setup();
#line 7 "c:\\Users\\jamieho\\OneDrive2\\OneDrive\\repo\\RGBMatrix\\RGBMatrix.ino"
void loop();
#line 3 "c:\\Users\\jamieho\\OneDrive2\\OneDrive\\repo\\RGBMatrix\\RGBMatrix.ino"
void setup()
{
  RGBMatrixInit();
}
void loop()
{
  unsigned int i = 60000;
  DispShowMsColors();
}
