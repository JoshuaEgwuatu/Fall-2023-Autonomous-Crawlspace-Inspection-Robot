# Croomba Experimental Data
## System Testing

## Power
In order to verify the power subsystem is meeting all requirements, 5 trial runs of measuring the voltage and current of each main subline coming off the battery were carried out, and the results are in the tables below. We ran over an hour and fifteen minutes of trial runs while programming. The power system sucessfully powered all subsytems without outside assistance. This proves the two constraints laid out in the proposal that the power subsystem will provide correct current and voltage to the subsystems for a time that would allow mapping of a crawlspace environment.  
### Main Power LN 2 & 5
Trial Number (N)|Current(A) | Voltage (V)  |
|:---: | :---:|:----:|
| 1 |       0.526 A |        13.26 V|
| 2 |       0.627 A |        13.26 V|
| 3 |       0.675 A |        12.85 V|
| 4 |       1.265 A |        12.68 V|
| 5 |       1.326 A |        12.75 V|

### Navigation LN 7A & 8A
Trial Number (N)|Current(A) | Voltage (V)  |
|:---: | :---:|:----:|
| 1 |       0.7 A |    5.33 V|
| 2 |      0.6 A |       5.34 V|
| 3 |      0.79 A |       5.33 V|
| 4 |       0.7 A |        12.68 V|
| 5 |       1.326 A |        12.75 V|

### Network Router LN 9A & 10A
Trial Number (N)|Current(A) | Voltage (V)  | 
|:---: | :---:|:----:|
| 1 |      0.1 A |       5.3 V|
| 2 |      0.12 A |       5.32 V|
| 3 |       0.12 A |       5.31 V|
| 4 |       0.28 A |        5.31 V|
| 5 |       0.33 A |        5.3 V|

### Movement LN 11A & 12A
Trial Number (N)|Current(A) | Voltage (V)  | 
|:---: | :---:|:----:|
| 1 |       0.526 A |        13.26 V|
| 2 |       0.627 A |        13.26 V|
| 3 |       0.675 A |        12.85 V|
| 4 |       1.265 A |        12.68 V|
| 5 |       1.326 A |        12.75 V|

### Environmental Sensing  LN 13A & 14A
Trial Number (N)|Current(A) | Voltage (V)  | 
|:---: | :---:|:----:|
| 1 |      0.0642 A |       5.24 V|
| 2 |       0.0645 A |       5.23 V|
| 3 |       0.0644 AA |       5.26 V|
| 4 |       0.0.065 A |        5.31 V|
| 5 |       0.064 A |        5.3 V|

###




## Navigation
### Mapping
The main job of the system's lidar is to create a map of the surrounding area without having to be provided a manually drawn map by the operator. To ensure that the map is being generated correctly, the perimeter of our test area was measured and the percent error was calculated. The perimeter of the lidar-generated map was found by measuring the picture at a set zoom and creating a proportion from that value. The areas missed were then measured on the screen and the proportional value was applied to convert into the physical distance. The main focus of this experiment was areas along the perimeter which the lidar missed as the additional points it caught past the perimiter are blocked by the true wall. 

| Perimeter (ft) | Measured Perimeter (ft) | Percent Error (%) |
| :------------: | :---------------------: | :---------------: |
| 47.75          | 45.74                   | 4.39              |
| 41             | 38.63                   | 6.14              |
| 41             | 38.68                   | 6.00              |

The results show that the lidar was able to succesfully map the majority of the enclosed areas perimeter as it navigated around the space. In the worst case, it only missed 6.14% of the map. However, this percentage should be mostly negligable because none of the gaps in the map are large enough for the robot to fit through.

### Imaging
After adjusting the project's scope, imaging has been reprioritized and will take precedence over autonomous control. Because we plan to stitch the images of the crawlspace together using python and OpenCV, it is essential to test what percentage of the ceiling we can succesfully photograph. We tested this metric by treating the photographs taken as a jigsaw and then finding the area of any spots not recorded and comparing that area to the overall ceiling area.

RESULTS

## Enviromental Sensing
### Temperature
The sensor was placed outside at different times and compared to the ambient temperature given by Weather.com. The test was preformed like this because the commercially available sensor turned out to be incredibly slow and inaccurate. It was also done in this way because an outdoor enviroment is where the robot will be used. 
| Date/Time Recorded | System Temperature Sensor (°F) | Website Listed Temperature (°F) | Percent Error (%) | Difference (°F) |
| :----------------: | :----------------------------: | :-----------------------------: | :---------------: | :-------------: |
| 11/5/2022 23:30    | 62.825                         | 63                              | 0.28              | 0.175           |
| 11/6/2022 0:44     | 61.5375                        | 61                              | 0.88              | 0.5375          |
| 11/6/2022 1:23     | 57.925                         | 59                              | 1.82              | 1.075           |
| 11/6/2022 11:53    | 62.2375                        | 64                              | 2.75              | 1.7625          |
| 11/6/2022 15:06    | 71.125                         | 70                              | 1.61              | 1.125           |
| 11/6/2022 16:33    | 66.6875                        | 67                              | 0.47              | 0.3125          |
| 11/6/2022 21:46    | 66.5375                        | 64                              | 3.96              | 2.5375          |
| 11/7/2022 17:40    | 65.53                          | 66                              | 0.71              | 0.47            |   

The table shows that the system temperature sensor has exceptional accuarcy when compared to a purchased sensor. The max error found was just under 4% which is well within the level of accuracy which we were hoping for.
### Humidity
The sensor was placed outside at different times and compared to the  humidity given by Weather.com. The test was preformed like this because the commercially available sensor turned out to be incredibly slow and inaccurate. It was also done in this way because an outdoor enviroment is where the robot will be used. 
| Date/Time Recorded | System Humidity Sensor (%RH) | Website Listed Humidtiy (%RH) | Percent Error (%) | Difference (%RH) |
| :----------------: | :--------------------------: | :---------------------------: | :---------------: | :--------------: |
| 11/5/2022 23:30    | 82.3                         | 84                            | 2.02              | 1.7              |
| 11/6/2022 0:44     | 87.1                         | 89                            | 2.13              | 1.9              |
| 11/6/2022 1:23     | 93.1                         | 95                            | 2.00              | 1.9              |
| 11/6/2022 11:53    | 86.9                         | 86                            | 1.05              | 0.9              |
| 11/6/2022 15:06    | 83.2                         | 84                            | 0.95              | 0.8              |
| 11/6/2022 16:33    | 95.4                         | 99                            | 3.64              | 3.6              |
| 11/6/2022 21:46    | 92.8                         | 96                            | 3.33              | 3.2              |
| 11/7/2022 17:40    | 37.5                         | 38                            | 1.32              | 0.5              |

The table shows that the humidity sensor is well within our desired range for accuracy. The datasheet for the DHT22 sensor says the accuracy should be ±2 %RH. While this experiment found several points outside this range, it seems to mainly be at the higher humidity values where the accuracy decreases. However, even at these points the accuracy is at a very acceptable level.  

### Moisture Content
The Moisture Probe was first tested using axial resistors so that a known value could be tested. The resistors were also checked on a multimeter so that the true value could be compared along with the listed value. This test provided limited results due to the availablity of resistors to test. However, it is secondary to the full moisture content testing and was mostly used for troubleshooting.
| Known Resistance (MΩ) | Multimeter Result (MΩ) | Probe Result (MΩ) |
|       :---:           |       :----:           |    :----:         |
| 1                     | 1.02                   | 1.02              |
| 2.2                   | 2.23                   | 2.23              |
| 4.7                   | 4.83                   | 4.82              |
| 10                    | 9.88                   | 9.78              |
| 47                    | 51.0                   | 46.0              |

The results above were all found to be accurate within 1% error except for the 47 MΩ test which had about 10% error. This is because it was found that the first two stages had greatly increased accuracy compared to the stages with larger resistors used in the voltage divider. After much research, it was found that Arduino analog read pins prefer a smaller input impedance which was unknown at the time of designing. This could be fixed in future revisions by switching out the microcontroller used. 


The system was used on blocks of wood with differing moisture contents and compared to the results given by a commercial wood moisture probe. Forcing a piece of wood to be a certain moisture content caused some problems with this experimentation. Leaving the wood pieces in a steamy room  allowed values between 7% and 11% to be tested but the higher values could not be achieved this way.  Instead, a piece of wood was soaked with water and tested at different times as the wood dried out and its moistrue content fell. This allowed the higher values to be tested.
| COTS Moisture Content Probe | System Moisture Content Probe | 
| :---:                       |    :----:                     | 
| 7                           | 6.86                          |
| 9                           | 7.34                          |
| 10                          | 8.13                          |
| 10                          | 8.31                          |
| 11                          | 9.51                          |
| 13                          | 11.31                         |
| 13                          | 14.44                         |
| 14                          | 15.89                         |
| 15                          | 12.26                         |
| 16                          | 17.55                         |
| 17                          | 16.87                         |
| 19                          | 18.55                         |
| 24                          | 22.4                          |
| 25                          | 23.26                         |
| 26                          | 23.54                         |

As can be seen from the table above, the actual moisture content value is not 100% accurate to the commercial probe. However, all values fall within ±3 of the expected percentage value. The collected data shows that the system is detecting changes within the moisture content of plank. Based on the raw resistance values which were seen in the previous section. It is believe some of this error comes from the equation created to convert resistance to wood mositure percentage. 

## Movement
### The Height Constraint
For the first test we measured the height of the robot with a tape measure. This was done in order to ensure that the 16 inch height constraint was met. This experiment was conducted twice and the results are displayed below. 
| Trial Number | Height of Robot |
|:---:         | :---:           |
| 1            | 15.1875 inches  |
| 2            | 15.1875 inches  |

The above results show that the robot is 15.1875 inches tall. That number is less than 16 inches, and thus the height constraint has been met
### Motor Encoders
The purpose of this test is to confirm that the motor encoders and Arduino software are correctly measuring the rotational speed of the motors. The motor encoders are connected to GPIO pins on the Arduino, and the software reads the frequency of the signals and converts them into a rotational speed. Those values were compared against a measurement obtained by using a digital tachometer placed into contact with the drive wheel. The values in the table below are in units of RPMs.
|Robot's Reading|Tachometer Reading|
|:---:          |:---:             |
|219.7          |220               |
|218.5          |219.2             |
|220.1          |219.8             |
|219.2          |219.9             |
|220            |220.6             |

These results show that the Arduino program for the motor encoders is correctly measuring its speed. The odometry readings are important so that the robot can determine its location in space.
### Linear Speed
For this experiment the team wanted to measure the robot’s linear speed. To do this, we measured out 10 feet with a tape measure, and then used a stopwatch to determine how quickly the robot covered that distance. The desired speed is about 1 foot per second. This gives us the average velocity of the robot, but an instantaneous velocity is also desirable. ROS’s instantaneous speed measurement was also recorded and is displayed below.  respectively.
|Travel Time|Average Speed(ft/s)|Instant. Speed(m/s)|
|:---:      |:---:              |:---:              |
|9.60       |1.05               |0.3937             |
|9.68       |1.04               |0.3937             |
|9.65       |1.045              |0.3937             |
|9.58       |1.05               |0.3937             |
|9.63       |1.047              |0.3937             |

These results show that the average speed of the Croomba is about 1 foot per second which is the desired value. However, the Instantaneous Speed measurements from ROS are incorrect. 0.3937 m/s is equivalent to 1.29 ft/sec, and ROS reported the same speed value consistently. The team believes that the value is being lost in the Publisher-Subscriber Communication that works with ROS. We implemented a Partial Integral Derivative (PID) dynamic compensator, which would be responsible for stability, speed, and accuracy of the robot’s movement system; however, we messed it up big time, and the PID calculation is not all there yet.
### 30 Degree Incline
Finally, a test was done to determine whether or not the Croomba could ascend up a 30 degree inclined plane as described in the signoffs. To accomplish this, the team put together some pieces of plywood at a 30 degree angle and set the Croomba on a course to see if it could make its way up the hill. This test was conducted 3 times.
| Trial Number | Croomba Ascension? |
|:---:         | :---:              |
| 1            | No                 |
| 2            | No                 |
| 3            | No                 |

The Croomba was unable to go up the steep slope. The team believes this deviation is caused by a lack of traction on the treads as well as a high center of mass on the robot. That high center of mass pulls the robot back down the hill and the front of the bot begins to lose trasction with the ramp. In short, the robot is too top and back heavy, and this leads to the robot wanting to flip onto its back like a turtle when ascending up the incline. 