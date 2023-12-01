# Software Description:
The software consists of two parts: a C++ code (compass software.ino) and a Python code (compass software.py). The C++ code runs on an Arduino board and reads data from an HMC5883L compass sensor. It calculates the heading and sends the raw compass data to a Raspberry Pi via serial communication. The Python code runs on the Raspberry Pi and receives the raw compass data. It further processes the data and publishes the calculated heading as a ROS message.

# Dependencies:
- Arduino IDE: Required to compile and upload the C++ code to the Arduino board.
- ROS (Robot Operating System): Required to run the Python code and publish ROS messages.
- PuTTY (Windows) or any SSH client (Linux/Mac): Required to establish an SSH connection with the Raspberry Pi.

# Installation:
1. Install the Arduino IDE from the official website (https://www.arduino.cc/en/software).
2. Install ROS on the Raspberry Pi by following the official documentation (http://wiki.ros.org/ROS/Installation).
3. Install PuTTY or any SSH client on your computer if you are using Windows. For Linux or Mac, use the built-in terminal.

# Running the Software:
1. Connect the Arduino board to the Raspberry Pi via USB.
2. Open the Arduino IDE and navigate to "compass software.ino".
3. Compile and upload the code to the Arduino board using the Arduino IDE.
4. Open PuTTY or your SSH client on your computer.
5. Enter the IP address of the Raspberry Pi and establish an SSH connection.
6. In the SSH terminal, navigate to the directory containing "compass software.py".
7. Run the Python code using the command: "python compass software.py".
8. The code will start reading the compass data and publishing the calculated heading as a ROS message.

# Usage:
- The C++ code continuously reads the compass data and sends it to the Raspberry Pi via serial communication.
- The Python code running on the Raspberry Pi receives the raw compass data and calculates the heading.
- The calculated heading is published as a ROS message.
