import serial
import time

# Initialize the serial connection with the Arduino
ser = serial.Serial('/dev/ttyACM0', 9600, timeout=1)

# Function to control the motor for turning left
def turnLeft():
    ser.write("L".encode())
    time.sleep(1.3)
    ser.write("F".encode())
    time.sleep(1.5)

# Function to control the motor for turning right
def turnRight():
    ser.write("R".encode())
    time.sleep(1.3)
    ser.write("F".encode())
    time.sleep(1.5)

# Function to control the motor for moving forward
def moveForward():
    ser.write("F".encode())
    time.sleep(1)

# Function to control the motor for moving backward
def moveBackward():
    ser.write("B".encode())
    time.sleep(1)

if _name_ == '_main_':
    while True:
        # Read the distance measurement from the Arduino
        data = ser.readline().decode().strip()
        if data:
            fdist = float(data)
            print(fdist)

            # Check the distance measurement and control the motor
            if fdist < 50:
                print("Front distance is less than 50 cm")
                moveForward()
            else:
                print("Front distance is greater than or equal to 50 cm")
                moveBackward()
        else:
            print("No data received from Arduino")
