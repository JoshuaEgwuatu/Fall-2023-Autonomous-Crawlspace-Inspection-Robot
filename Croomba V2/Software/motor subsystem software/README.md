# What the software does:
The motor software controls the movement of a motor using an Arduino board. The Arduino board receives commands from a Raspberry Pi via serial communication and controls the motor accordingly. The motor can move forward, backward, turn left, turn right, or stop.

# All dependencies:
- Arduino IDE: Required to compile and upload the motor software.ino code to the Arduino board.
- Python: Required to run the motor software.py code on the Raspberry Pi.
- pySerial library: Required to establish a serial connection between the Raspberry Pi and the Arduino.

# How to Install:
1. Install the Arduino IDE from the official website (https://www.arduino.cc/en/software).
2. Install Python on the Raspberry Pi. You can use the command "sudo apt install python" to install Python if it is not already installed.
3. Install the pySerial library by running the command "pip install pyserial" on the Raspberry Pi.

# How to run/How to use:
1. Connect the Arduino board to the Raspberry Pi via USB.
2. Open the Arduino IDE and navigate to the motor software.ino file.
3. Compile and upload the code to the Arduino board using the Arduino IDE.
4. Open a terminal on the Raspberry Pi and navigate to the directory containing the motor software.py file.
5. Run the Python code using the command: "python motor software.py".
6. The code will establish a serial connection with the Arduino and start receiving distance measurements.

# Code:
## motor software.ino:
- This code is written in C++ and is intended to be uploaded to the Arduino board.
- It sets up the input and output pins for the motor drivers and encoders.
- It reads the serial input from the Raspberry Pi to determine the motor movement direction.
- It controls the motor based on the received direction and updates the pulse frequencies from the encoders.
- It converts the pulse frequencies to motor speeds and outputs them to the Raspberry Pi via serial communication.

## motor software.py:
- This code is written in Python and is intended to be run on the Raspberry Pi.
- It establishes a serial connection with the Arduino board.
- It defines functions to control the motor for different movements (turn left, turn right, move forward, move backward).
- It continuously reads the distance measurement from the Arduino via serial communication.
- Based on the distance measurement, it calls the appropriate motor control function.

Note: Make sure to adjust the serial port ("/dev/ttyACM0") in the Python code if it is different on your Raspberry Pi.
