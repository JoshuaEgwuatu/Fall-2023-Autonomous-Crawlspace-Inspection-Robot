# Function of the subsystem:
The function of this subsystem is to make mechanical improvements to both the movement and power subsystems for the Crawlspace Inspection Robot to climb a 30-degree incline. The team will improve the power subsystem we need to increase the power output of the robot in order to allow it to navigate through more crawlspace environments by check the current power subsystem of the robot, determining the maximum power output capability of the existing system, and evaluating the power requirements for navigating through various crawlspace environments. Through our new list of specifications and contraints, we can analyse a soltuion to the problem. 

# Constraints:

1- Physical limitations
   - The robot's structure and components may have limitations on how much power they can handle or accommodate
   - The device shall have rubber treading for more friction on inclined surfaces.
   - Main Chassie must have a low center of gravity for stability on the device.
   - Crawlspace Robot will be significantly heavier than the original model.


 2- Energy source limitations
   - The availability and capacity of the energy source used to power the robot may impose constraints on the power output
   - Power consumption will suffice for overall output.
   - Power subsystem will supply more voltage than the current model by adding another battery in series to provide 24V DC to the electrical system.

3-  Compatibility with existing systems
   - The improved power subsystem should be compatible with the robot's existing systems and components
   - For the power Subsystem, the motors can run off the main power lines of 12V DC and use the buck converter to power the microcontroller, the Raspberry Pi Model 4, for the motors.
   - 

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
Yahboom Aluminum Alloy ROS Robot Car Chassis - Crawler:

<img width="208" alt="Screenshot 2023-09-14 162439" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/5eee0979-cc0b-4a24-ac4c-d87978fc3986">



GB37Y3530-12V-90EN:

<img width="321" alt="Screenshot 2023-09-14 162504" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/e13f399a-716e-445b-a78a-508adccdb38b">


## Electrical Schematics

# BOM
|Name of Items|Description|Used in which subsystem(s)|Part Number|Manufacturer|Quantity| Price|Total|
|Crawler Chassis|New Chassis Model|Movement|6000101002|YAHBOOM|1|$179.00|$179.00|
|Metal DC Geared Motor|12V motor with a 90:1 metal gearbox and an integrated quadrature encoder|Movement|GB37Y3530-12V-90EN|DFROBOT|1|$29.00|$208.00|


# References
https://category.yahboom.net/collections/a-chassis-bracket/products/ros-chassis?variant=44178907169084
https://www.dfrobot.com/product-1210.html
https://www.pololu.com/product-info-merged/4845
https://wiki.dfrobot.com/12V_DC_Motor_122_rpm_w_Encoder_SKU__FIT0403
https://www.linkedin.com/pulse/comparison-pallet-truck-wheel-materials-plastic-wheels-elly-lee#:~:text=Compared%20to%20plastic%20wheels%2C%20nylon,advantageous%20in%20certain%20specialized%20environments.
https://github.com/YahboomTechnology/ROS-Robot-Chassis
