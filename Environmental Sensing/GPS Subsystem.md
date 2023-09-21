# Function of the subsystem:

The robot utilizes a GPS subsystem to track its location in real-time, enhancing the accuracy and efficiency of data collection. By continuously determining its precise coordinates, the robot can navigate to specific locations based on GPS coordinates, enabling targeted data collection from various points of interest. This approach ensures more precise data gathering. To fulfill the function of real-time location tracking and improve environmental data collection, the team selected the M10Q-5883 GNSS GPS & Compass Module. Alongside the top-level controller and robotic operating system (ROS), the GPS subsystem integrates seamlessly, allowing the controller to make informed decisions and control the robot's actions by utilizing GPS data and other sensor inputs. Additionally, ROS facilitates the connection between the GPS subsystem and other systems such as mapping and path planning, ensuring smooth interoperability.


## Function:
- GPS subsystem tracks robot location using M10Q-5883 module.
- Provides real-time location data to the controller for decision-making and control.
- Integrates with ROS for seamless data exchange with other robot systems.
- Shares location data with mapping and path planning modules in ROS for targeted navigation.
- Collaborates with sensors to enhance environmental data accuracy.


# Constraints:

The robot operates in a limited visibility of the sky, where obstacles blocking GPS satellite signals, the robot needs to quickly acquire a reliable GPS signal. To achieve this, we set the time limit for signal acquisition, X < 0.06 seconds. Since GPS signals travel at the speed of light, which has a slight delay of about 6/100ths of a second, configuring X allows the robot to efficiently obtain the GPS signal within the desired timeframe.

> “GPS radio signals travel at the speed of light, up to 186,000 miles per second, meaning that a GPS satellite signal takes 6/100ths of a second to reach the earth.”


The second limitation we need to consider is how accurate the GPS readings are. There are a few specific criteria these readings should meet. 
-	The horizontal accuracy, which ensures precise positioning, needs to be within 3 meters.
-	The vertical accuracy, which is important for accurate altitude measurements, needs to be within 5 meters. 
-	The GPS should provide accurate timing information, with a time accuracy within 30 nanoseconds. 
-	The speed accuracy, which is determined by the global average user range rate error (URRE), should be 0.006 m/sec or less over any 3-second period with a 95% chance.

The GPS system needs to consider things like signal weakening and interference from the environment. It should use models to predict and reduce the effects of these factors on GPS signal quality. Even when there are obstacles blocking about 100.45% of the signal, like walls in a rectangular crawlspace, the system should try to maintain a good signal. 

The percentage of signal blockage caused by the walls is (99.45 square feet / 99 square feet) x 100 ≈ 100.45%.

Given the length of 16.5 ft and width of 6 ft, the total area of the crawlspace is 99 square feet. By using floor tiles as a reference, with each tile measuring 9 in by 9 in, we can determine that the crawlspace occupies an area of 11 by 11 tiles. The walls of the model crawlspace, constructed with various materials, have a minimum height of 17 in and a maximum height of 36 in. Considering an average height of 26.5 in (2.21 ft), we can calculate the area of the walls. Assuming the walls are straight and uniformly tall, the area of the walls is estimated to be 99.45 square feet.

> "rectangular-shaped model crawlspace was created, with a length of 16.5 ft, a width of 6 ft, and a resulting area of 99 square feet. Floor tiles were used as a reference for quantifying the crawlspace area, with each floor tile having an area of 9 in by 9 in. The walls of the model crawlspace were made with various materials available in the laboratory and had a minimum height of 17 in and a maximum height of 36 in." from the Experimental Data



## Specifications and Constraints                                                                                        
1- The robot shall be capable of acquiring a reliable GPS signal within a time limit of less than 0.06 seconds, considering limited sky visibility and potential signal blockage.

2- The acquired GPS readings shall meet the following accuracy criteria:
   - Horizontal accuracy: within 3 meters.
   - Vertical accuracy: within 5 meters.
   - Time accuracy: within 30 nanoseconds.
   - Speed accuracy: 0.006 m/sec or less over any 3-second period with a 95% chance.

3- The GPS system shall utilize predictive models to mitigate the effects of signal weakening and interference caused by environmental factors, even when approximately 100.45% of the signal is blocked by obstacles such as walls in a rectangular crawlspace.

4- The time limit for GPS signal acquisition, denoted as X, is set to be less than 0.06 seconds to accommodate the slight delay in GPS signals, which take approximately 6/100ths of a second to reach the Earth.

5- The walls in the crawlspace obstruct approximately 100.45% of the GPS signal, resulting in signal blockage and degradation.


# Analysis 
In situations where there are obstacles obstructing the line of sight between the GPS module and the satellites, the limited sky visibility can result in weaker GPS signals and a decrease in signal-to-noise ratio (SNR). We are using the Log-normal Shadowing Model, which considers the distance between the GPS module and the obstacles, allowing for the quantification of signal attenuation caused by the obstacles. 

<br>

The Log-normal Shadowing Model: $P_r = P_t - PL – X$

<br>

$P_r$ is a received signal power, which represents the strength of the signal received by the M10Q-5883 module. The GPS receiver receives GPS signals at $1575.42$ $MHz$ ($L1$ $frequency$) at a power level of $-125$ $dBm$ (about $0.1$ $fWatt$).

<br>

$P_t$ is transmitted signal power, which represents the power of the signal transmitted by the satellites. 
<br>
For GPS, total L-band transmit power levels of $50-240 W$, 
<br>

$20-135 W$ for GLONASS
<br>
$95-265 W$ for Galileo,
<br>
$130-185 W$ for BeiDou-2. 
<br>
<br>
The path loss $(PL)$ :   Friis transmission equation: $PL = 20log10(d) + 20log10(f) - 147.55$

<br>
 $d$ Distance between the receiver and the satellites = propagation time x radio wave speed
<br>
- Converting the received signal power from $dBm$ to $Watts$: $Ptx = 10^((-125 - 30) / 10) = 0.1$ $fWatt$
- $wavelength (λ)$: $λ = c / f = 299,792,458 m/s / (1575.42 MHz) = 0.190293 m$
- Friis transmission equation to find the $distance (d)$ : $d = λ / (4π) * 10^((Ptx - Prx + Gtx + Grx) / 20)$
   $= 0.190293 m / (4π) * 10^((0.1 - (-125) + 0 + 0) / 20)$
   $= 0.190293 m / (4π) * 10^((125.1) / 20)$
   $= 0.190293 m / (4π) * 10^(6.255)$
   $≈ 0.190293 m / (4π) * 1,983,400.66$
<br>

 > "A receiver uses signals from satellites to figure out how long it takes for radio waves to travel from the satellites to the receiver's antenna. The signals sent by the satellites include time information, so the difference between that time and the receiving time is called the propagation time. By multiplying this propagation time by the speed of radio waves (which is the same as the speed of light, approximately 299,792,458 meters per second), we can calculate the distance between the satellites and the receiver."
 ![image](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/ecdfc573-d447-4d28-920d-6a2cef137692)

<br>

$PL = 20log10(d) + 20log10(f) - 147.55$
<br>
$d ≈ 0.190293 m / (4π) * 1,983,400.66$
<br>
$f = 1575.42 MHz$
<br>
$PL = 20log10(0.190293 m / (4π) * 1,983,400.66) + 20log10(1575.42 MHz) - 147.55$
<br>

Calculatiion:
<br>

$20log10(0.190293 m / (4π) * 1,983,400.66)$
<br>
   $≈ 20log10(0.190293 m / (4π) * 1,983,400.66)$
   <br>
   $≈ 20log10(0.190293 m / 7.85398) * 1,983,400.66)$
   <br>
   $≈ 20log10(0.0242102 m * 1,983,400.66)$
   <br>
   $≈ 20log10(48,152.98 m)$
   <br>
   $≈ 20 * log10(48,152.98)$
   <br>
   $≈ 20 * 4.682$
   <br>
   $≈ 93.648$$
<br>

$20log10(1575.42 MHz)$
   <br>
   $≈ 20log10(1575.42 MHz)$
   <br>
   $≈ 20 * log10(1575.42)$
   <br>
   $≈ 20 * 3.197$
    <br>
   $≈ 63.94$
<br>


$PL ≈ 93.648 + 63.94 - 147.55$
<br>
   $≈ 210.588 - 147.55$
   $≈ 63.038$
<br>
The path loss value of 63.038 indicates that the signal strength decreases as the distance between the transmitter and receiver increases. Higher path loss values indicate weaker signal strength. 

<br>
the signal-to-noise ratio (SNR):
<br>
The received signal power: -125 dBm
<br>
The noise power bandwidth (2.046 MHz): -110 dBm
<br>
The modulation scheme: 43 dB
<br>
the received power: -135 dBm
<br>
the received power: -147 dBm
<br>
SNR = Pr / N0  (Note that Pr: received signal power and N0: noise power)
<br>
SNR at Received Signal Power: SNR = -125 dBm / -110 dBm = 15 dB
<br>
SNR during Acquisition: SNR = -135 dBm / -110 dBm = 25 dB
<br>
SNR during Tracking: SNR = -147 dBm / -110 dBm = 37 dB

<br>
Higher SNR values indicate a better quality of service and higher resistance to noise and interference.
<br>
<br>

We are using M10Q-5883 GNSS GPS & Compass Module and this module supports concurrent reception of four GNSS systems: GPS, GLONASS, Galileo, and BeiDou. It is designed to provide exceptional sensitivity and acquisition time for all L1 GNSS signals. The high number of visible satellites (30 for GPS, 24 for GLONASS, 25 for Galileo, and 46 for BeiDou) indicates good satellite availability, which can contribute to improved positioning accuracy. The u-blox Super-S technology enhances RF sensitivity and can improve the dynamic position accuracy in challenging scenarios such as non-line-of-sight environments. The module is equipped with a high-gain 15 x 15 mm² patch antenna, which offers a balance between performance and small size. This omnidirectional antenna radiation pattern provides flexibility in device installation. The GNSS module communicates with the robot's system via UART interface, and the magnetic compass used is the QMC5883L. The power consumption of the module is 13mA, and it operates within a temperature range of -20°C to 80°C. The GNSS module supports the UBX protocol at a default baud rate of 9600, and the NMEA protocol at a 1Hz update rate.
<br>

![Image 9-10-23 at 3 33 PM](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/4090fdb3-1ddd-4458-8dd8-948a7d28b8fe)



# Buildable Schematics
## 3D Model
![GPS Dimensions copy](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/6e8e4859-ac41-4840-bfed-8bfedc6d6107)

## Electrical Schematic
![gps-sch](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/d29ad344-5e5c-4b88-953b-4b3c92c0469d)


# BOM
| Name of Items |  Description        | Used in which subsystem(s) | Part Number     | Manufacturer   | Quantity | Price     | Total |
| ---           |     ---             |          ---               |      ---        |     ---        |    ---   |  ---      |  ---  |
| GPS           |GPS & Compass Module |  GPS subsystem             | M10Q-5883 GNSS  | rotorriot      |    1     |$39.99     |39.99$ |
| Arduino Nano  |ATmega328            |  GPS subsystem             | A000005         | Arduino        |    1     |$24.90     |$24.90 |
|               |                     |                            |                 |Total Components|    2     |Total Cost |$64.89 |

# References

https://www.techtarget.com/searchnetworking/definition/signal-to-noise-ratio

https://global.jaxa.jp/countdown/f18/overview/gps_e.html

https://link.springer.com/chapter/10.1007/978-3-642-72011-6_3

https://www.quora.com/How-is-the-distance-between-a-GPS-device-and-a-GPS-satellite-calculated

https://www.nxp.com/docs/en/brochure/75016740.pdf

https://cenv.wwu.edu/sal/gps-ephemeris-data

https://rotorriot.com/products/m10q-5883-gnss-gps-compass-module

https://oceanservice.noaa.gov/education/tutorial_geodesy/geo09_gps.html

https://www.gnssplanning.com/#/settings

https://www.e-education.psu.edu/geog862/node/1874

https://en.wikipedia.org/wiki/Friis_transmission_equation

https://rotorriot.com/products/m10q-5883-gnss-gps-compass-module

https://www.skypatrol.com/blog/understanding-gps 

https://gisgeography.com/gps-accuracy-hdop-pdop-gdop-multipath/

https://gisgeography.com/gps-accuracy-hdop-pdop-gdop-multipath/

https://www.gps.gov/systems/gps/performance/accuracy/

