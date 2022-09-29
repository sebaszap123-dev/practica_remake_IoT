#include "serial_functions.h"
// Create instant of class
serial_class calcular;
void setup()
{
  Serial.begin(115200);
}

void loop()
{
  // Call function of instance serial_class for get incomming data from serial monitor
  calcular.get_data();
}
