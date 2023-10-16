# Function of the subsystem:

The GPS system is expected to provide real-time location tracking of the autonomous crawlspace inspection robot to enhance the accuracy of environmental data collection.


# Constraints:

## Constraint 1: 
The robot shall be capable of acquiring a reliable GPS signal within a time limit of less than 0.06 seconds, considering limited sky visibility and potential signal blockage.

### More detail about constraint 1:
GPS signals travel at the speed of light, which has a slight delay of about 6/100ths of a second, configuring X allows the robot to efficiently obtain the GPS signal within the desired timeframe.
> “GPS radio signals travel at the speed of light, up to 186,000 miles per second, meaning that a GPS satellite signal takes 6/100ths of a second to reach the earth.”


## Constraint 2: 
The acquired GPS readings shall meet the following accuracy criteria:
   - Horizontal accuracy: within 3 meters.
   - Vertical accuracy: within 5 meters.
   - Time accuracy: within 30 nanoseconds.
   - Speed accuracy: 0.006 m/sec or less
   

## Constraint 3: 
The Autonomous Crawlspace Inspection Robot must integrate GPS and compass functionalities to accurately determine its global position and heading. GPS technology will provide latitude (36° 10' 48.2" N) and longitude (85° 27' 30" W) coordinates for precise global positioning, while the compass will ensure accurate orientation relative to the Earth's magnetic field. 


# Buildable Schematics
## 3D Model
![GPS Dimensions copy](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/6e8e4859-ac41-4840-bfed-8bfedc6d6107)

## Electrical Schematic
### Full Schematic
![FULL-SCHE](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/5163496d-c076-425c-9f4d-5a6b2aaeba27)

### GPS Schematic
![GPS](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/fe74239e-dd3b-4562-94a8-5df121465e68)

# Analysis 
## Analysis 1
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

## Analysis 2
We are using M10Q-5883 GNSS GPS & Compass Module and this module supports concurrent reception of four GNSS systems: GPS, GLONASS, Galileo, and BeiDou. It is designed to provide exceptional sensitivity and acquisition time for all L1 GNSS signals. The high number of visible satellites (30 for GPS, 24 for GLONASS, 25 for Galileo, and 46 for BeiDou) indicates good satellite availability, which can contribute to improved positioning accuracy. The u-blox Super-S technology enhances RF sensitivity and can improve the dynamic position accuracy in challenging scenarios such as non-line-of-sight environments. The module is equipped with a high-gain 15 x 15 mm² patch antenna, which offers a balance between performance and small size. This omnidirectional antenna radiation pattern provides flexibility in device installation. The GNSS module communicates with the robot's system via UART interface, and the magnetic compass used is the QMC5883L. The power consumption of the module is 13mA, and it operates within a temperature range of -20°C to 80°C. The GNSS module supports the UBX protocol at a default baud rate of 9600, and the NMEA protocol at a 1Hz update rate.
<br>

![Image 9-10-23 at 3 33 PM](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/4090fdb3-1ddd-4458-8dd8-948a7d28b8fe)

<br>

## Analysis 3

The Autonomous Crawlspace Inspection Robot will be equipped with GPS and compass integration to accurately determine its global position and heading. 

we need to calculate the distance 
- Robot's Latitude = 36° 10' 48.2" N = 36.180056°
- Robot's Longitude = 85° 27' 30" W = -85.458333°

Haversine formula:
a = sin²((0.630017 - 0.630017) / 2) + cos(0.630017) * cos(0.630017) * sin²((-1.490907 - (-1.491040)) / 2)
= sin²(0) + cos(0.630017) * cos(0.630017) * sin²(0.000133)
= 0.000000001999999996

c = 2 * atan2(√0.000000001999999996, √(1 - 0.000000001999999996))√
c = 0.000002828

d = 6371 * 0.000002828
d ≈ 0.018 km or 0.011 miles 
note:  R is the Earth's radius (6,371 km)

we need to calculate the heading with 
- Compass Reading  = 36° 10' 30" N = 36.175°
- Magnetic Declination = -5° 2' (west) = -5.033°

heading = 36.175° + (-5.033°) ≈ 31.142°

The integration of GPS and compass data enables the Autonomous Crawlspace Inspection Robot to precisely identify its location and direction on a global scale. This integration empowers the robot to effectively navigate and carry out inspections within the crawlspace environment, ensuring efficient and accurate operations.



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

https://www.sciencedirect.com/topics/earth-and-planetary-sciences/dead-reckoning

https://en.wikipedia.org/wiki/Repeater

https://www.techtarget.com/whatis/definition/amplification-factor-gain

https://community.esri.com/t5/coordinate-reference-systems-blog/distance-on-a-sphere-the-haversine-formula/ba-p/902128

https://community.openspace.ai/industry-chat-for-fun-42/how-to-use-online-compass-590

https://sciencing.com/what-parallels-maps-4689046.html

https://www.nwcg.gov/course/ffm/location/65-declination

https://onlinecompass.net

https://www.magnetic-declination.com




