# Radon Sensor Signoff

# Function of the subsystem

The purpose of the radon sensor in the Autonomous Crawl Space Inspection Robot is to identify and measure the levels of radon gas in the environment. Radon is a hazardous radioactive gas that is commonly found in crawl spaces, resulting from the decay of uranium in natural stone. By integrating a radon sensor into the robot, it can gather real-time information on the radon levels present in the crawlspace. The sensor provides readings that indicate the concentration of radon gas, enabling early detection of elevated levels. By including a radon sensor, the Autonomous Crawlspace Inspection Robot improves its ability to collect environmental data, offering valuable insights into potential health risks and enabling proactive measures to protect against the dangers of radon exposure.

The Radon Eye RD200 was selected by the team due to its compact and lightweight nature, distinguishing it from other radon sensors. It maintains dependable precision and accuracy when detecting radon gas levels. This guarantees the acquisition of reliable data for evaluating potential health hazards.




# Constraints:

One important constraint is Sensor Accuracy and Reliability. The radon sensor is crucial for accurately detecting and measuring radon levels. It must provide precise readings to effectively assess the concentration of radon gas.To ensure the radon sensor is accurate and reliable, there are several requirements. The sensor needs to be able to detect 0.5 counts per minute (cpm) per picocurie per liter (pCi/l) at a radon level of 10 pCi/l (or 30 counts per hour per picocurie per liter). It should operate within a temperature range of 10 to 40 degrees Celsius and with a relative humidity below 90%. The measurement range should be between 0.1 and 99.99 pCi/l. The precision should be within 10% at 10 pCi/l, and the accuracy should be within ±10%, with an error of less than ±0.5 pCi/l. The sensor should provide the first reliable data output in under 60 minutes and update the data every 10 minutes using a 60-minute moving average. The data log should store up to one year's worth of data, with intervals of 1 hour.

The constraint for power consumption is that the radon sensor, specifically the RD200 model, should not consume more than 5 Volts (V). However, the RD200 model operates at DC 12 ± 0.1V, 65mA, which exceeds the desired power consumption limit. Therefore, if we want to conform to the power constraint, modifications or adaptations will be needed to reduce the RD200's power consumption to no more than 5V.

Size and Weight is also a consideration. The radon sensor (RD200) needs to be compact and lightweight so that it can easily be integrated into the robot. This allows the robot to maintain its mobility and functionality, even in small crawl space areas. The RD200 sensor with its dimensions of 80mm x 120mm and a weight of 240g should be accommodated.


The Integration Complexity, while connecting the Radon Eye RD200 is relatively simple, integrating the sensor into the robot's data collection and processing system may pose challenges. It is important to carefully consider the robot's architecture and ensure compatibility with the sensor. Additionally, the sensor should be able to communicate with the microcontroller using protocols like Serial Peripheral Interface (SPI) and Inter-Integrated Circuit (I2C).

| Type                     | First reliable data out | Data interval                       | Sensitivity                           | Operating range   | Range             | Precision        | Accuracy                        | Power                               | Size                     |
|--------------------------|-------------------------|-------------------------------------|---------------------------------------|-------------------|-------------------|------------------|---------------------------------|-------------------------------------|--------------------------|
| pulsed ion chamber 200cc | < 60min                 | 10min update (60min moving average) | 0.5cpm/pCi/l at 10pCi/l (30cph/pCi/l) | 10~40°C, RH < 90% | 0.1 ~ 99.99 pCi/l | < 10% at 10pCi/l | < ±10% (min. error <±0.5pCi/l ) | DC 12 ± 0.1V, 65mA (12V DC adapter) | Φ80(mm) x 120(mm) , 240g |
|                          |                         |                                     |                                       |                   |                   |                  |                                 |                                     |                          |

Specifications and Constraints:
- Shall have accuracy and reliability.
- Shall consider power consumption.
- Shall consider size and weight.
- Shall consider integration complexity.

# Analysis

## Sensitivity:
The RD200 has a sensitivity of 0.5cpm/pCi/l at 10pCi/l (30cph/pCi/l). 
The sensitivity ratio =  dividing the counts per minute (cpm) by the picocuries per liter (pCi/l) value = cpm/pCi/l = 0.5 cpm / 10 pCi/l = 0.05  cpm/pCi/l


## Accuracy:
The RD200 has an accuracy specification of < ±10% with a minimum error of <±0.5pCi/l. The reference instrument provides an average value of 9.95 pCi/L (368.2 Bq/m^3), and the RD200 measurement has an average value of 9.02 pCi/L (333.6 Bq/m^3). Percentage Difference = [(RD200 Reading - Reference Value) / Reference Value] * 100 = [(9.02 - 9.95) / 9.95] * 100 = -9.35%. The percentage difference is -9.35%. The RD200 measurements, on average, are 9.35% lower than the reference instrument measurements.

## Size and weight of the Radon Eye RD200
The dimensions of the detector are 80.01 x 100.08 x 119.89 mm. The weight of the detector is specified as 240 g. The Radon Eye RD200 has a compact, cylinder design. These dimensions and weight suggest that the detector can be easily integrated into the Autonomous Crawl Space Inspection Robot without adding significant bulk to the overall system.

## Power consumption
The Radon Eye RD200, when incorporated into the Autonomous Crawl Space Inspection Robot, is powered by corded electricity with a voltage input of 12 volts and an amperage of 0.1 amps.

Power = Voltage x Current
Power = 12V x 0.1A = 1.2 watts

The power consumption of the Radon Eye RD200 is 1.2 watts. 

Considering that the robot is powered by corded electricity, such a low power consumption greatly helps the efficiency and battery life of the robot. This alone makes the Radon Eye RD200 a great option.

## Data Communication: 

The sensor will communicate with the Arduino Nano through the UART.


![Capture](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/8c94b023-226e-47b6-a670-f79a3ce60f19)

# Buildable Schematics
## 3D Model

![Capture2](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/68f077dd-3136-4677-801a-17bd6fbe16cf)


## Electrical Schematic
![Capture1](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/f7fd8153-4001-42ce-9f7b-eb55b6eb4e4a)


# BOM

# References
http://radonftlab.com/wp-content/uploads/2015/data_sheet/datasheet_RD200_v1.4_eng.pdf
https://static1.squarespace.com/static/5b993fe05cfd798a41d5ad02/t/5efcc978603e985475044e16/1593624954643/brochureRadonEye_foldout.pdf


