#include "serial_functions.h"
serial_class calcular;
void setup() {
  Serial.begin(115200);
}

void loop() {
  calcular.get_data();
}
