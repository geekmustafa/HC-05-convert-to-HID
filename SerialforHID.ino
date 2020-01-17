
#include <SoftwareSerial.h>

SoftwareSerial bluetoothSerial(2, 3); //(RX, TX)

void setup()
{
  Serial.begin(9600);
  bluetoothSerial.begin(9600);
}

void loop()
{
  if (bluetoothSerial.available())
  {
    Serial.print((char)bluetoothSerial.read());
  }
  if (Serial.available())
  {
    bluetoothSerial.print((char)Serial.read());
  }
}
