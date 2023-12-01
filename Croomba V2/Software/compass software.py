import rospy
from std_msgs.msg import Float64
import math
import serial

def compass_node():
    # Create a ROS publisher
    rospy.init_node('compass_node', anonymous=True)
    heading_pub = rospy.Publisher('compass_heading', Float64, queue_size=10)

    ser = serial.Serial('/dev/ttyUSB0', 9600)

    while not rospy.is_shutdown():
        line = ser.readline().decode().strip()

        if line.startswith('R'):
            data = line.split(',')
# Check if the data contains enough elements
            if len(data) >= 4:
                try:
                    x = int(data[1])
                    y = int(data[2])
                    z = int(data[3])

                    # Calculate the heading
                    heading = math.atan2(y, x) * (180 / math.pi)
                    if heading < 0:
                        heading += 360

                    # Publish the heading as a ROS message
                    heading_pub.publish(heading)

                except ValueError:
                    rospy.logwarn("Invalid data received: %s", line)
            else:
                rospy.logwarn("Invalid data format: %s", line)
if _name_ == '_main_':
    try:
        compass_node()
    except rospy.ROSInterruptException:
        pass
