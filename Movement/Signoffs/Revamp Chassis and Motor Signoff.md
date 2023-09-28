# Function of the subsystem:

This subsystem is designed to enhance the mechanical features of the movement and power subsystems of the Crawlspace Inspection Robot, enabling it to ascend a 30-degree incline and navigate through a wider range of crawlspace environments by boosting its power output.

# Specifications and Constraints:

1. The Robot’s weight distribution and electrical components shall be improved with better DC motors and lower center of gravity. The Robot’s weight distribution and electrical components shall be improved by using more efficient and powerful DC motors, we should lower the robot’s center of gravity, ensuring it remains (put here the value of the maximum height of the robot) from the ground. 
2. The device shall have rubber treading for more friction on inclined surfaces. The robot shall have rubber treads with a minimum coefficient of friction of 0.8 or higher to ensure increased traction on inclined surfaces (0.8 or higher is often considered a reasonable benchmark for rubber treads on inclined surfaces).
3. The Crawlspace Robot shall be significantly heavier than the original model.
4. Power consumption shall suffice using both batteries for overall output by supplying 360W to the device.
5. Power subsystem shall supply more power than the current model by adding another battery in parallel to provide 14 A to the electrical system without increasing the voltage.
6. The DC Motors selected shall help the Crawl Space Robot move easier on an incline with the motors that increase its torque with its 90:1 gear ratio and 38 kg⋅cm stall torque.
7. For the power Subsystem, the motors can run off the main power lines of 12V DC and use the buck converter to power the microcontroller, the Raspberry Pi Model 4, to command the sensors and motor drivers.


# Analysis: 

## Chassis
Observing the datasheet of the chassis kit, it is not only heavier but also gives more surface area. We will be able to change the interior contents of the Croombah and structure it to be less top-heavy and more stable. The original chassis kit selected had the dimensions 300/230/124 (mm) and weighed 1202.02g. The new chassis kit dimensions are 311.98/239/164.56 (mm) and weighs 2010g. The tracks used in the original chassis are made of plastic material. The tracks for the new chassis are made out of nylon. Nylon has stronger weight bearing abilities, and these benefits are needed to satisfy our constraints [5].

## Motors
We have found a motor that can give more power to the Croombah with more torque and higher Reduction ratio. It is the GB37Y3530-12V-90EN. The motor has similar dimensions to the current motor and will make for smooth changes. The length is approximately 74mm, giving the chassis enough room for 2 of these selected motors to fit with their respective encoders. This can be proved by knowing the linear distance of space on the underside of the new chassis. The space listed in Figure () shows the length of the specified area in 155mm. Since 2 x 74mm = 148mm of required space for the selected motors, this verifies the solution and possibility of the motors to help the Croombah complete its tasks.

## Weight
The length, width, and height of the Crawler chassis is substantially larger compared to the original model. Thus, giving us more workroom to structure the Robot correctly. Below is a list of all the components added together to confirm the weight difference. 

|    | Subsystem  | Component                 | Count | Weight (g) | Total  |
|----|------------|---------------------------|-------|------------|--------|
| 1  | Navigation | Rasberry Pi               | 1     | 46         | 46     |
| 2  | Navigation | Voltage Regulator         | 1     | 10         | 10     |
| 3  | Navigation | Lidar                     | 1     | 170        | 170    |
| 4  | Sensors    | Resistance Measure Ciruit | 1     | 45         | 45     |
| 5  | Sensors    | Temperature Sensor        | 1     | 2.9        | 2.9    |
| 6  | Sensors    | Humidity Sensor           | 1     | 2          | 2      |
| 7  | Sensors    | Cascading Arm             | 1     | 640        | 640    |
| 8  | Sensors    | Arm Motor                 | 1     | 44         | 44     |
| 9  | Sensors    | Linear Actuator           | 1     | 74         | 74     |
| 10 | Sensors    | Probes                    | 1     | 4.5        | 4.5    |
| 11 | Sensors    | Bracket                   | 1     | 5          | 5      |
| 12 | Navigation | Ultrasonic Sensors        | 4     | 13         | 52     |
| 13 | Navigation | Router                    | 1     | 204        | 204    |
| 14 | Power      | Batteries                 | 2     | 454        | 908    |
| 15 | Movement   | Chassis                   | 1     | 2010       | 2010   |
| 16 | Movement   | Motor Driver              | 2     | 55         | 110    |
| 17 | Movement   | 2WD Motors                | 2     | 205        | 410    |
| 18 | Movement   | Microcontroller           | 1     | 5          | 5      |
| 19 | Power      | Adapters                  | 2     | 181.4      | 362.8  |
| 20 | Power      | E Stop Switch             | 1     | 26         | 26     |
| 21 | Power      | Bus Bar                   | 1     | 306        | 306    |
| 22 | Power      | Terminal Connectors       | 2     | 5          | 10     |
| 23 | Power      | Blades Fuses              | 17    | 18         | 306    |
| 24 | Power      | Buck Converter            | 7     | 15         | 105    |
| 25 | Power      | E-Fuse                    | 1     | 20         | 20     |
| 26 | Navigation | Antenna                   | 1     | 41         | 41     |
| 27 | Navigation | HD Camera                 | 1     | 100        | 100    |
| 28 | Navigation | Live Stream Camera        | 1     | 1.4        | 1.4    |
|    |            |                           |       |            | 6020.6 |

As you can see in Figure (), the estimated weight of the updated Croombah would be heavier than the current one (4801.2) by approximately 1219.4g. This added weight will help the Robot gain traction and better grip to hard inclined surfaces [5].



# Buildable Schematics

## 3D models
XiaoR Geek Smart Robot Aluminum Alloy Robot Car Chassis:

![Current Chassis Model](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/118767661/798db94e-cbcf-48c2-9256-b24a9b1e4bde)


GB37Y3530-12V-90EN:

<img width="321" alt="Screenshot 2023-09-14 162504" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/e13f399a-716e-445b-a78a-508adccdb38b">


## Electrical Schematics

![Revamp Schematic new](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/118767661/d00299d3-a35d-4eed-b7df-32f29bd9bc50)



# BOM

|Name of Items          |Description                                                             |Used in which subsystem(s)|Part Number       |Manufacturer           |Quantity  |Price  |Total  |
|-----------------------|------------------------------------------------------------------------|--------------------------|------------------|-----------------------|----------|-------|-------|
|Metal DC Geared Motor  |12V motor with a 90:1 metal gearbox and an integrated quadrature encoder|Movement                  |GB37Y3530-12V-90EN|DFROBOT                |1         |$29.00 |$29.00 |
|LiFePO4 12.8VDC Battery|Custom LiFePO4 26650 Battery: 12.8V 6.6Ah (84Wh 14A Rate)               |Power                     |CU-MM167          |AA Portable Power Corp.|1         |$98.95 |$127.95|



# References
https://category.yahboom.net/collections/a-chassis-bracket/products/ros-chassis?variant=44178907169084
https://www.dfrobot.com/product-1210.html
https://www.pololu.com/product-info-merged/4845
https://wiki.dfrobot.com/12V_DC_Motor_122_rpm_w_Encoder_SKU__FIT0403
https://www.linkedin.com/pulse/comparison-pallet-truck-wheel-materials-plastic-wheels-elly-lee#:~:text=Compared%20to%20plastic%20wheels%2C%20nylon,advantageous%20in%20certain%20specialized%20environments.
https://github.com/YahboomTechnology/ROS-Robot-Chassis
https://www.batterystuff.com/kb/articles/battery-articles/battery-bank-tutorial.html
https://www.quora.com/What-does-a-gear-ratio-of-60-1-mean-in-a-gear-motor-used-in-an-industrial-conveyor 
https://punchlistzero.com/coefficient-of-friction-meaning-calculation-values/ 
