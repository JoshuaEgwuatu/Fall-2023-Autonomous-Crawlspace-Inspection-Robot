# Radon Sensor Signoff

# Function of the subsystem

The role of the radon sensor subsystem is to send data to the main MCU by interfacing with another MCU. 

# Constraints:                                                                                                                                  

1. The sensor must be able to read radon levels from 0.5pCi/L to 4.5pCi/L 
    - The average level for a home is 1.3 pCi/L
    - EPA recommends you should consider fixing radon levels if greater than 2pCi/L
2. The sensor must be able to communicate to the microcontroller using a communicative language (I2C, UART, or SPI protocols)
    - This will allow the sensor to use the same MCU as other sensors
3. The sensor must have accuracy within .5pCi/L for good readings
4. The sensor should be powered by either 5 or 12V.
5. The sensor must produce Real-Time Measurements.
    - Preferably in intervals of <= 1 minute.
    - Radon levels are highest at dawn, so averages of an entire day are not as important as tracking any portion of the day.


# Buildable Schematics
## 3D Model

![Capture2](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/68f077dd-3136-4677-801a-17bd6fbe16cf)


## Electrical Schematic
### Sensor interface with Arduino
![picture of schematic](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/6e7a44ed-f4f4-434a-824a-002767f83d8c)

### Overall System Schematic
![picture of full schematic](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/b9e9d557-10d1-49e6-9da5-fa5014a4c61c)


# Analysis

The Radon Eye RD200 was selected by the team due to its compact and lightweight nature, distinguishing it from other radon sensors. It maintains dependable precision and accuracy when detecting radon gas levels. 


| Type                     | First reliable data out | Data interval                       | Sensitivity                           | Operating range   | Range             | Precision        | Accuracy                        | Power                               | Size                     |
|--------------------------|-------------------------|-------------------------------------|---------------------------------------|-------------------|-------------------|------------------|---------------------------------|-------------------------------------|--------------------------|
| pulsed ion chamber 200cc | < 60min                 | 10min update (60min moving average) | 0.5cpm/pCi/l at 10pCi/l (30cph/pCi/l) | 10~40°C, RH < 90% | 0.1 ~ 99.99 pCi/l | < 10% at 10pCi/l | < ±10% (min. error <±0.5pCi/l ) | DC 12 ± 0.1V, 65mA (12V DC adapter) | Φ80(mm) x 120(mm) , 240g |

Figure 1
This data is directly pulled from the product’s datasheet

## Constraint 1:

The radon sensor is able to measure between 0.1 to 99.9 pCi/L. These values work extremely well for what is needed.

## Constraint 2:

The sensor has a UART interface that will be used to communicate with the Arduino Nano. This will allow for data to be easier to track. The electrical schematic will show how these connections will take place.

An example of how we will communicate with the sensor:

![Capture](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/8c94b023-226e-47b6-a670-f79a3ce60f19)

The RD200M is compatible with an Arduino Nano. These serial pins will be used to communicate the RD200M and Arduino Nano [7]:  
![Capture3](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/edee1df5-697b-4803-802d-eacd862d5010)


## Constraint 3:

The sensor accuracy meets the accuracy requirement of 0.5pCi/L or less. The sensor has been proven to have at least 90% accuracy according to Radon FTLab.

## Constraint 4:

The sensor is powered by corded electricity with a voltage input of 12 volts and an amperage of 0.1 amps.

## Constraint 5:

The sensor is able to display data in intervals of 1, 10, and 60 minutes. The sensor is able to display data per day and month. The device is able to store data for up to a year

# BOM

| Name of Items |  Description        | Used in which subsystem(s) | Part Number     | Manufacturer   | Quantity | Price     | Total |
| ---           |     ---             |          ---               |      ---        |     ---        |    ---   |  ---      |  ---  |
| Radon Sensor  |RD200 RadonEye       |  Sensor                    | B01IH7SGCQ      | Radon Eye      |    1     |$174.00    |$174.00|
| Arduino Nano  |ATmega328            |  GPS subsystem             | A000005         | Arduino        |    1     |$24.90
|               |                     |                            |                 |Total Components|    2     |Total Cost |$198.90 |


# References
[1] http://radonftlab.com/wp-content/uploads/2015/data_sheet/datasheet_RD200_v1.4_eng.pdf

[2] https://static1.squarespace.com/static/5b993fe05cfd798a41d5ad02/t/5efcc978603e985475044e16/1593624954643/brochureRadonEye_foldout.pdf

[3] https://www.epa.gov/radon/what-epas-action-level-radon-and-what-does-it-mean#:~:text=EPA%20recommends%20homes%20be%20fixed,L%20and%204%20pCi%2FL.

[4] https://merona.blob.core.windows.net/radonftlab-web/20220404_RadonEye_%EC%82%AC%EC%9A%A9%EC%9E%90%EC%84%A4%EB%AA%85%EC%84%9C(%EC%98%81%EB%AC%B8).pdf

[5] https://www.dcity.org/portfolio/rd200m-library/#:~:text=The%20rd200m%20library%20works%20with,module%20using%20a%20serial%20interface.

[6] https://github.com/dcityorg/rd200m-library-arduino

[7] https://www.arduino.cc/reference/en/language/functions/communication/serial/
