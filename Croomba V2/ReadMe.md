# Fall-2023-Autonomous-Crawlspace-Inspection-Robot 

## Executive Summary

This is the second version of the Autonomous Crawlspace Inspection Robot, which has undergone significant improvements compared to its predecessor. The key enhancements include:

1. Enhanced Localization: The robot now incorporates a compass subsystem that continuously reads and processes data to accurately determine its heading and directions in the x, y, and z axes. This enables precise positioning and navigation within the crawlspace environment.

2. Improved Surface Compatibility: Through design modifications and the utilization of specialized tracks, the Autonomous Crawlspace Inspection Robot is now capable of effectively climbing slick wooden surfaces. This enhancement extends the robot's ability to navigate a wider range of challenging terrains.

3. Increased Incline Handling: The robot's mobility has been significantly enhanced, allowing it to handle inclines of up to 25 degrees. This improvement in the robot's climbing capability enables it to access and inspect areas with steeper angles, expanding its operational scope.
   
## Capabilities
### V1 Capabilities
* Low-level autonomy which allows the robot to navigate through an enclosed area
* Creating a map of the area using the SLAM algorithm
* Take pictures throughout an area and stitch simple areas into a singular, larger image
* Collect humidity, temperature, and moisture content data and overlay information on images
* Supply power for consistent operation across all components
* Robot movement through serial commands and return encoder data to the main microcontroller
* Manual control through text-based commands while also streaming live video to the operator

### V2 Current Capabilities
* Low-level autonomy which allows the robot to navigate through an enclosed area
* Creating a map of the area using the SLAM algorithm
* Take pictures throughout an area and stitch simple areas into a singular, larger image
* Collect humidity, temperature, and moisture content data and overlay information on images
* Supply power for consistent operation across all components
* Robot movement through serial commands and return encoder data to the main microcontroller
* Manual control through text-based commands while also streaming live video to the operator
* Continuously reading and processes data to calculate the Croomba's heading.
* Able to handle inclines of up to 25 degrees, with improved traction on carpeted surfaces.

## Salient Outcomes



## Project Demonstration & Images
### Video of Robot at Competition
Video of robot click here

### Robot image
picture 


## Subsystems
- Compass Subsystem - To locate the robot having the orientation and heading 
- Revamp Chassis and Motor subsystem - upgrade the chasis to have less weight and upgrade the motor to climb issue

## Cut Subsystems with explanation
- Live Stream subsystem
  - reason: 
- Radon Subsystem
  - reason:

    
## Experimentation
### Compass Experiment:
The experimental analysis indicates that the compass, with the implemented measures and calibration, meets the specified constraints and measures of success.

![image](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/dfed39f2-4645-45de-870b-5125ebda6661)


### Revamp Chassis and Motor Experiment
the maximum incline the Croomba could climb was 15 degrees. Currently, the Croomba can handle 25 degrees. The Croomba was able to handle 0-10 degrees without any issues. At 15 degrees, the Croomba was not able to climb the slick wooden surface. 

![image](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/c9488e06-4436-4792-8eaf-fdb0fc90fd5d)

Full experimentation document available clicl here.


## About Us
### Team 3:
- Fatima Al-Heji is an undergraduate Computer Engineering student and is a senior at Tennessee Technological University.
- Josh Egwatu is is an undergraduate Electrical Engineering student and is a senior at Tennessee Technological University.
 ### Faculty Supervisor:
 - Mr. Jesse Roberts

## Repo Organization

### Document 
- Experimantal Analysis in Documentation
   
### SignOffs 
1- Environmental Sensing File: 
- Compass Subsystem signoff
- Radon Sensor Signoff

2- Movemnet File:
- Revamp Chassis and Motor Signoff

### Software 
- compass subsystem software in Software file in Environmental Sensing file
- Revamp Chassis and Motor subsystem software n Software file in Movemnet file

