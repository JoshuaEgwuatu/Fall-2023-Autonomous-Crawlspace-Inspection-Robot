# Function of the subsystem:

This subsystem is designed to enhance the mechanical features of the movement of the Crawlspace Inspection Robot, enabling it to ascend a 30-degree incline and navigate through a wider range of crawlspace environments by boosting its power output.

# Constraints:

## Constraint 1: Ascending Capability
The selected Metal DC Geared Motor and LiFePO4 shall provide the necessary torque of 0.0408 kg⋅m² and power of 0.5361 W to enable the robot to ascend a 30-degree incline.

## Constraint 2: Chassis and Motor Dimension Upgrade
Chassis: The dimensions of the robot must satisfy these size requirements.
- The chassis height shall be 220 mm
- The chassis bewidth shall be 300 mm
- The chassis length hall be 300 mm

Motor: The dimensions of the robot must satisfy these size requirements.
- The motor shall be 25 millimeters in diameter. 
- The motor shall not exceed 79.7 millimeter. 
- The motor shall have a shaft diameter of 4mm length.

## Constraint 3: Motor load capacity
The motor shall have a load capacity of at least 2.6802 kg, exceeding the weight of the robot by more than 75%, ensuring safety, reliability, and adaptability.


# Buildable Schematics

## 3D models
XiaoR Geek Smart Robot Aluminum Alloy Robot Car Chassis:

![Current Chassis Model](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/118767661/798db94e-cbcf-48c2-9256-b24a9b1e4bde)


GB37Y3530-12V-90EN:

<img width="321" alt="Screenshot 2023-09-14 162504" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/e13f399a-716e-445b-a78a-508adccdb38b">


## Electrical Schematics

![Revamp Schematic new](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/118767661/d00299d3-a35d-4eed-b7df-32f29bd9bc50)


# Analysis: 
## Analysis 1:

Given values:
- Metal DC Geared Motor: 12V motor with a 90:1 metal gearbox and an integrated quadrature encoder.
- Weight of the robot: 5353.12 g
- Wheel Radius: 0.01524 m
- speed: 0.2 m/s
- Incline angle: 30 degrees

Torque Requirement:
- Weight = 5353.12 g = 5.35312 kg
- Force required = Weight * sin(30 degrees) = 2.67656 kg
- Effective radius = 0.01524 m
- Torque requirement = 2.67656 kg * 0.01524 m = 0.0408000704 kg⋅m²


Power Requirement:
- Angular velocity = 0.2 m/s / 0.01524 m = 13.1233595801 rad/s
- Power requirrement  = 0.0408000704 kg⋅m² * 13.1233595801 rad/s = 0.536122914 W

<br>

This should be able to provide enough torque and power for the robot to ascend a 30-degree incline. 

<br>

## Analysis 2:
- Old chassis dimensions: Length = 300 mm, Width = 230 mm, Height = 124 mm
- The height requirement is to be 220 mm. The old chassis height is 124 mm, which is less than the required height. 
- The width requirement is to be 300 mm. The old chassis width is 230 mm, which is less than the required width. 
- The length requirement is to be 300 mm. The old chassis length is already 300 mm, which satisfies the length requirement.

The table provides the components that will be present in the upper-level chassis:
<img width="952" alt="Screenshot 2023-10-24 at 10 36 05 AM" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/4cf3c336-c684-4934-b8c1-95fe266e5710">





## Analysis 3:
- Weight of the robot: 5353.12 g
- Motor specifications: Metal DC Geared Motor (12V motor with a 90:1 metal gearbox and an integrated quadrature encoder)
- Torque requirement: 0.0408 kg⋅m²


minimum load capacity = 5353.12 g * 0.75 = 4014.84 g
<br>
load capacity of the motor = 0.0408 kg⋅m² / 0.01524 m = 2.6802 kg
<br>
The motor's load capacity exceeds the minimum requirement by more than 75%, indicating that the motor meets the motor load capacity constraint.




# BOM

|Name of Items          |Description                                                             |Used in which subsystem(s)|Part Number       |Manufacturer           |Quantity  |Price  |Total  |
|-----------------------|------------------------------------------------------------------------|--------------------------|------------------|-----------------------|----------|-------|-------|
|Metal DC Geared Motor  |12V motor with a 90:1 metal gearbox and an integrated quadrature encoder|Movement                  |GB37Y3530-12V-90EN|DFROBOT                |1         |$29.00 |$29.00 |




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
