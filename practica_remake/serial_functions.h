class serial_class
{

public:
  // Function can be called
  void get_data(void);

private:
  // Functions that only can be called inside the class
  void calculateUnsigned(int);
  void calculateSigned(int);
  void isSigned(String, int);
  void u64(int);
  void u32(int);
  void u16(int);
  void u8(int);
  void i64(int);
  void i32(int);
  void i16(int);
  void i8(int);
};
// Await for value sended in serial monitor
void serial_class::get_data(void)
{
  if (Serial.available() > 0)
  {
    String command = Serial.readStringUntil('\n');                // read string until newline character
    int index = command.indexOf(" ");                             // get index of blank space
    String number = command.substring(0, index);                  // get number
    String type = command.substring(index + 1, command.length()); // get type string
    if (number != "")
    {
      int myInt = command.toInt();
      if (myInt > 0)
      {
        isSigned(type, myInt);
      }
    }
  }
}
// check if is signed or unsigned number
void serial_class::isSigned(String type, int number)
{
  if (type == "unsigned")
  {
    // Unsigned values
    calculateUnsigned(number);
  }
  else
  {
    // singend values
    calculateSigned(number);
  }
}

void serial_class::calculateUnsigned(int number)
{
  switch (number)
  {
  case 8:
    u8(number);
    break;
  case 16:
    u16(number);
    break;
  case 32:
    u32(number);
    break;
  case 64:
    u64(number);
    break;
  default:
    Serial.print("No valid");
    break;
  }
}

void serial_class::calculateSigned(int number)
{
  switch (number)
  {
  case 8:
    i8(number);
    break;
  case 16:
    i16(number);
    break;
  case 32:
    i32(number);
    break;
  case 64:
    i64(number);
    break;
  default:
    Serial.print("No valid");
    break;
  }
}

// Make the maths for unsigned numbers

void serial_class::u64(int number)
{
  uint64_t test1;
  uint64_t test2;
  test1 = pow(2, number);
  test1 -= 1;
  test2 = pow(2, 0);
  test2 -= 1;
  Serial.print("Max: ");
  Serial.println(test1);
  Serial.print("Min: ");
  Serial.println(test2);
}
void serial_class::u32(int number)
{
  uint32_t test1;
  uint32_t test2;
  test1 = pow(2, number);
  test1 -= 1;
  test2 = pow(2, 0);
  test2 -= 1;
  Serial.print("Max: ");
  Serial.println(test1);
  Serial.print("Min: ");
  Serial.println(test2);
}
void serial_class::u16(int number)
{
  uint16_t test1;
  uint16_t test2;
  test1 = pow(2, number);
  test1 -= 1;
  test2 = pow(2, 0);
  test2 -= 1;
  Serial.print("Max: ");
  Serial.println(test1);
  Serial.print("Min: ");
  Serial.println(test2);
}
void serial_class::u8(int number)
{
  uint8_t test1;
  uint8_t test2;
  test1 = pow(2, number);
  test1 -= 1;
  test2 = pow(2, 0);
  test2 -= 1;
  Serial.print("Max: ");
  Serial.println(test1);
  Serial.print("Min: ");
  Serial.println(test2);
}

// Make the maths for signed numbers

void serial_class::i64(int number)
{
  int64_t test1;
  int64_t test2;
  number -= 1;
  test1 = pow(2, number);
  test1 -= 1;
  test2 = -pow(2, number);
  Serial.print("Max: ");
  Serial.println(test1);
  Serial.print("Min: ");
  Serial.println(test2);
}
void serial_class::i32(int number)
{
  int32_t test1;
  int32_t test2;
  number -= 1;
  test1 = pow(2, number);
  test1 -= 1;
  test2 = -pow(2, number);
  Serial.print("Max: ");
  Serial.println(test1);
  Serial.print("Min: ");
  Serial.println(test2);
}
void serial_class::i16(int number)
{
  int16_t test1;
  int16_t test2;
  number -= 1;
  test1 = pow(2, number);
  test1 -= 1;
  test2 = -pow(2, number);
  Serial.print("Max: ");
  Serial.println(test1);
  Serial.print("Min: ");
  Serial.println(test2);
}
void serial_class::i8(int number)
{
  int8_t test1;
  int8_t test2;
  number -= 1;
  test1 = pow(2, number);
  test1 -= 1;
  test2 = -pow(2, number);
  Serial.print("Max: ");
  Serial.println(test1);
  Serial.print("Min: ");
  Serial.println(test2);
}
