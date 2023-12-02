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
* Continuously reading and processing data to calculate the Croomba's heading.
* Able to handle inclines of up to 25 degrees, with improved traction on carpeted surfaces.

## Project Demonstration & Images
### Video
For video of the Croomba click [here](https://drive.google.com/file/d/1BlidPwFD-7A3Lk9YjZDArSfRcH_MlGhP/view?usp=sharing)

### Robot image 
![IMG_5433](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/6c96d0ff-0441-4c29-a52a-4b10bfa67e1b)


## Added/Edited Subsystems
- Compass Subsystem - To locate the robot having the orientation and heading 
- Chassis and Motor subsystem - Upgrade the chassis to have less weight and upgrade the motor to climb issue
- Live Stream subsystem - Upgrade the Image stitching program into a real-time live stream.
   - This subsystem did not get completed/purchased due to time constraints. 
- Radon Subsystem - Adding radon sensing capability to the Croomba
   - This subsystem did not get completed/purchased due to the unavailability of the product.

    
## Experimentation
### Compass Experiment:
The experimental analysis indicates that the compass, with the implemented measures and calibration, meets the specified constraints and measures of success.

![image](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/dfed39f2-4645-45de-870b-5125ebda6661)


### Revamp Chassis and Motor Experiment
the maximum incline the Croomba could climb was 15 degrees. Currently, the Croomba can handle 25 degrees. The Croomba was able to handle 0-10 degrees without any issues. At 15 degrees, the Croomba could not climb the slick wooden surface. 

![image](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/c9488e06-4436-4792-8eaf-fdb0fc90fd5d)

Full experimentation document available click [here](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/blob/959f4df5862007a06841c948a97f7c722fc72168/Croomba%20V2/Reports/Experimental%20Analysis.md)

## About Us
### Team 3:
- Fatima Al-Heji is an undergraduate Computer Engineering student and is a senior at Tennessee Technological University.
- Joshua Egwuatu is an undergraduate Electrical Engineering student and is a senior at Tennessee Technological University.
 ### Faculty Supervisor:
 - Mr. Jesse Roberts

## Repo Organization

### Reports
The reports consist of Experimental Analysis, the Team Poster, Lessons Learned, and several Presentations.

### Documentation 
This includes the Signoffs and Final Bill of Materials.

### Software 
The Pseudo Code and other Software components for the project will be placed in Software. Each code directory contains a README that details a description, functions of the code, dependencies, and how to install it.

