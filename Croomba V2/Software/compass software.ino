#include <Wire.h>
#include <math.h>

#define HMC5883L_ADDR 0x1E  // I2C address of the HMC5883L

void setup() {
  Wire.begin();  // Initialize I2C communication
  Serial.begin(9600);  // Initialize serial communication
  initializeHMC5883L();  // Initialize the HMC5883L
}

void loop() {
  int x, y, z;
  readCompassData(x, y, z);  // Read compass data

  // Print the raw values
  Serial.print("Raw X: ");
  Serial.print(x);
  Serial.print("  Y: ");
  Serial.print(y);
  Serial.print("  Z: ");
  Serial.println(z);

  // Calculate heading
  float heading = atan2((float)y, (float)x) * 180 / M_PI;
  if (heading < 0) {
    heading += 360;
  }

  // Print the calculated heading
  Serial.print("Heading: ");
  Serial.println(heading);

  // Send the raw compass data to the Raspberry Pi
  Serial.print("R,");
  Serial.print(x);
  Serial.print(",");
  Serial.print(y);
  Serial.print(",");
  Serial.println(z);

  delay(1000);  // Delay for 1 second
}

void initializeHMC5883L() {
  Wire.beginTransmission(HMC5883L_ADDR);
  Wire.write(0x00);  // Configuration register A
  Wire.write(0x70);  // 8-average, 15 Hz default, normal measurement
  Wire.endTransmission();

  Wire.beginTransmission(HMC5883L_ADDR);
  Wire.write(0x01);  // Configuration register B
  Wire.write(0xA0);  // Gain = 5
  Wire.endTransmission();

  Wire.beginTransmission(HMC5883L_ADDR);
  Wire.write(0x02);  // Mode register
  Wire.write(0x00);  // Continuous measurement mode
  Wire.endTransmission();
}

void readCompassData(int& x, int& y, int& z) {
  Wire.beginTransmission(HMC5883L_ADDR);
  Wire.write(0x03);  // Start with register 3 (X-axis MSB)
  Wire.endTransmission();

  Wire.requestFrom(HMC5883L_ADDR, 6);  // Request 6 bytes of compass data
  if (Wire.available() == 6) {
    x = (Wire.read() << 8) | Wire.read();
    z = (Wire.read() << 8) | Wire.read();
    y = (Wire.read() << 8) | Wire.read();
  }
}
