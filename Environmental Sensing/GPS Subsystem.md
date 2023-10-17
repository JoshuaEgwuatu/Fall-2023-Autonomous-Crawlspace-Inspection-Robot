# Function of the subsystem:
Using the compass to enables the robot to determine its heading, maintain orientation, avoid obstacles, and optimize path planning, which to enhance the wall avoidance algorithm for navigation and the ROS Hector SLAM algorithm for mapping.


# Constraints:

## Constraint 1- Magnetic interference: 
 the system shall choose the suitable sensitivity setting within the range of 0 to 7, resulting in an LSB value of approximately ±0.000214 Ga, and shall implement shielding techniques.

## Constraint 2- Precision Limitations: 
with a gain setting of ±0.88 Gauss and a digital resolution of 0.73 mG/LSb, shall be considered for their precision limitations when using compass data for accurate path planning and mapping. To ensure enhanced accuracy, error estimation or filtering techniques shall be applied, effectively addressing potential errors in the measured magnetic field values.

## Constraint 3- Sensor Calibration: 
The compass sensor shall undergo periodic calibration, using a regular routine, to maintain accurate readings and compensate for variations in magnetic fields, ensuring precise path planning and mapping (with a correction factor of approximately 1.7045 LSb to compensate for a consistent bias of 1.5 Gauss).

# Buildable Schematics
## 3D Model
<img width="733" alt="Screenshot 2023-10-17 at 1 17 51 AM" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/4a1ef35f-5de1-4998-8579-3f99c34b23d6">

<br>

<img width="879" alt="Screenshot 2023-10-17 at 1 17 25 AM" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/61079cd7-0c44-42f0-8032-3544694f8f52">

<br>

<img width="561" alt="Screenshot 2023-10-17 at 1 32 05 AM" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/f7aa21dd-a324-4a91-95f9-5c6d00b93f9e">



## Electrical Schematic
### Full Schematic

![COMPASS11](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/4b836e9a-4335-41d3-9cdf-ec3c41e89893)


### GPS Schematic
![qE0TB](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/a5038b86-2b02-4978-81ee-00c555487f72)

<br>

![COMPASS](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/cc637902-9e77-4f97-b029-20570e2be7ea)


# Analysis 

## Table of HMC5883L that contain all the values that used in the analysis 

## Analysis 1
Sensitivity (Gain) = 230 LSb/gauss
<br>
Magnetic Field Strength (B) = +/-0.001006 T
<br>

Hc = 0° - 0° + (0.001006 T * 230 LSb/gauss * 1 * cos(0°))
<br>
Hc = 0.00023134 T * LSb
<br>
The HMC5883L compass module has a 12-bit ADC (Analog-to-Digital Converter) with a digital resolution of 1-LSb. This means that the output of the compass module is a 12-bit digital value, and each bit represents a specific range. The sensitivity setting for the HMC5883L compass module is  from 0 to 7.
<br>
According to the HMC5883L datasheet, the sensitivity (gain) values correspond to the these ranges:
<br>

- GN = 0: ±0.88 Ga
- GN = 1: ±1.30 Ga
- GN = 2: ±1.90 Ga
- GN = 3: ±2.50 Ga
- GN = 4: ±4.00 Ga
- GN = 5: ±4.70 Ga
- GN = 6: ±5.60 Ga
- GN = 7: ±8.10 Ga
  
<br>

The resolution is 1-LSb, the LSB value can be calculated by dividing the range by the maximum digital value of the 12-bit ADC 
Range = ±0.88 Ga
<br>

Digital Value Range = 4095 (12-bit ADC) - we got 4095 (2^12 - 1 = 4095)
<br>

LSB = 0.88 Ga / 4095 =  0.000214 Ga 
<br>

## Analysis 2

- Gain setting: ±0.88 Gauss
- Digital resolution: 0.73 mG/LSb
- Gain  = 1 / (Digital Resolution) = 1370 LSb/Gauss
- Effective resolution  = 0.73 mG/LSb
- Converting the effective resolution to compass heading accuracy, we need the ADC's resolution. 
  -  ADC has a resolution of 12 bits =  2^12 = 4096

- Compass Heading Accuracy = 0.73 mG/LSb / 4096 ≈ 0.00017822266 Gauss/LSb
- Compass Heading Accuracy (degrees) =  0.00017822266 Gauss/LSb / 0.88 Gauss ≈ 0.00020275228 degrees/LSb
<br>
When using compass data for accurate path planning and mapping, we need to the precision limitations of the compass sensors. The calculated compass heading accuracy of 0.00020275228 degrees/LSb indicates the level of accuracy that can be achieved.
<br>

## Analysis 3
- we need the sensor consistently reads 1.5 Gauss higher than the reference data.
- Correction Factor = (Measured Value - Reference Value) / Gain = (1.5 Gauss) / (0.88 Gauss) ≈ 1.7045 LSb
- we will going to use a raw sensor reading of 100 LSb.
- Corrected Sensor Reading = 100 LSb - 1.7045 LSb ≈ 98.2955 LSb
- We obtain a corrected sensor reading of approximately 98.2955 LSb.
<br>
To ensure accurate compass readings, it is important to establish a regular calibration routine. If the sensor consistently reads 1.5 Gauss higher than the reference data, a correction factor of 1.7045 LSb is applied to the raw sensor measurements. This compensates for the bias and improves the accuracy of the compass readings for path planning and mapping applications.
<br>


# BOM
| Name of Items |  Description                      | Used in which subsystem(s) | Part Number     | Manufacturer   | Quantity | Price     | Total |
| ---           |     ---                           |          ---               |      ---        |     ---        |    ---   |  ---      |  ---  |
| compass       |3-Axis Digital Compass IC HMC5883L |  compass subsystem         | HMC5883L        | adafruit       |    1     |$9.95      |$9.95  |
| Arduino Nano  |ATmega328                          |  compass subsystem         | A000005         | Arduino        |    1     |$24.90     |$24.90 |
|               |                                   |                            |                 |Total Components|    2     |Total Cost |$34.85 |

# References
https://cdn.sparkfun.com/datasheets/Sensors/Magneto/HMC5883L-FDS.pdf

https://arduino.stackexchange.com/questions/46089/arduino-gy273-hmc5883l-constant-value

https://www.best-microcontroller-projects.com/hmc5883l.html

https://www.adafruit.com/product/1746







