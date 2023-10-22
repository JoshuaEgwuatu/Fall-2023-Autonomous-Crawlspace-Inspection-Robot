# Livestream Camera Subsystem

# Function of the subsystem

The function of the camera subsystem is to provide a live video feed of the surroundings to a remote-control device, enabling the operator to visually navigate the robot in real-time.

# Constraints 

## Constraint 1 - Connectivity:
The power received within the crawlspace at a distance of 15 meters shall not exceed 0.004 mW or -23 dBm to avoid inadequate signal strength that could lead to unreliable WiFi connectivity.

## Constraint 2 - Real-Time Video Transmission:
The camera shall be supported with a minimum data rate of 1,492.992 Mbps to ensure a smooth and uninterrupted video feed.
### more info about constriant 2:
WiFi connection should provide a minimum data rate of 1,492.992 Mbps to minimize latency during video streaming.

## Constraint 3 - Light: 
Thw camera shall be designed to achieve a minimum luminous flux of 0.5 Lumens, ensuring an illuminance level of 0.5 Lux on the sensor surface to meet the light constraint.


# Buildable Schematics
## 3D Model


<img width="753" alt="Screen Shot 2023-10-22 at 3 38 39 PM" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/8a467bf7-f59d-4945-860d-6a6798563301">

<br>


<img width="753" alt="Screen Shot 2023-10-22 at 3 40 05 PM" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/b7d04c72-3d42-4dbb-ac3a-afd1d69c666c">


## How to connect 

>> Download and install the EZVIZ app by searching “EZVIZ” in App Store or Google PlayTM. - Launch the app and register for an EZVIZ user account following the start-up wizard.

<br>

>> From the EZVIZ app Home screen, tap “+” on the upper-right hand corner to go to the scan QR code interface.

<br>

<img width="461" alt="Screen Shot 2023-10-22 at 3 50 15 PM" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/8b38fa7f-a51b-40e4-99d7-691101df9577">
<br><img width="539" alt="Screen Shot 2023-10-22 at 3 50 00 PM" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/27fb0edd-c0d2-4686-bf9a-26a51c1f7bf3">


# Analysis

## Analysis 1:

As the distance between the camera and the control system increases, the received power diminishes due to propagation losses and obstacles in the crawlspace environment, indicating a weaker signal. the received power should surpass a specific threshold, determined by the receiver's sensitivity and the desired signal-to-noise ratio.

<br>

1. At a distance of 5 meters:
   Pr = Pt * (Gt * Gr * λ^2) / (4π * d)^2 = 100 mW * (2 * 1 * (12.5 cm)^2) / (4π * 5 m)^2 ≈ 0.040 mW = -16 dBm

<br>

2. At a distance of 10 meters:
   Pr = Pt * (Gt * Gr * λ^2) / (4π * d)^2 = 100 mW * (2 * 1 * (12.5 cm)^2) / (4π * 10 m)^2 ≈ 0.010 mW = -20 dBm

<br>

3. At a distance of 15 meters:
   Pr = Pt * (Gt * Gr * λ^2) / (4π * d)^2 = 100 mW * (2 * 1 * (12.5 cm)^2) / (4π * 15 m)^2 ≈ 0.004 mW = -23 dBm

<br>

To avoid inadequate signal strength that could lead to unreliable WiFi connectivity, the power received must not exceed 0.004 mW or -23 dBm 


## Analysis 2:

To ensure smooth and uninterrupted real-time video transmission from the Ezviz c1c camera at a data rate of 1,492.992 Mbps, the robot's control system and network infrastructure must be capable of handling this high-speed data transfer, and the WiFi connection should provide a minimum data rate of 1,492.992 Mbps to minimize latency during video streaming.

<br>

Frame size = 1920 pixels * 1080 pixels * 3 bytes = 6,220,800 bytes

<br>

Converting to megabits frame size = 6,220,800 bytes * 8 bits per byte / 1,000,000 = 49.7664 Mbps

<br>

Data rate = 49.7664 Mbps * 30 fps = 1,492.992 Mbps




## Analysis 3:

- The minimum illumination requirement = 0.5 Lux.
- Camera's sensor area = A = 1

<br>

luminous flux = F = E * A

<br>

F = 0.5 Lux * 1 square meter = 0.5 Lumens

the camera should achieve a minimum luminous flux of 0.5 Lumens to provide the desired illuminanc level of 0.5 Lux on the sensor surface.


# BOM

| Name of Items | Description                 | Used in which subsystem(s)  | Part Number | Manufacturer     | Quantity | Price      | Total  |
| --------------| --------------------------- | --------------------------- | ----------- | ---------------- | -------- | ---------- | ------ |
| ezviz c1c     | 1080p indoor wifi camera    | Livestream Camera Subsystem | ezviz c1c   | ezviz            | 1        | $19.99     | $19.99 |
|               |                             |                             |             | Total Components | 1        | Total Cost | $19.99 |


# References

https://www.manua.ls/ezviz/c1c/manual?p=13

https://www.amazon.com/EZVIZ-C1C-1080p-Security-Detection/dp/B07WPXXQPY?th=1

https://mfs.ezvizlife.com/C1C_datasheet.pdf?ver=92718




