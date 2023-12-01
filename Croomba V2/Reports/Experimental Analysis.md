# Experimental Analysis

##  Compass Experiment:

### Experimental Design:


- The compass was equipped with a sensitivity setting within the range of 0 to 7, resulting in an LSB value of approximately ±0.000214 Ga, to minimize magnetic interference.
- The compass sensor underwent periodic calibration using a correction factor of approximately 1.7045 LSb to compensate for a consistent bias of 1.5 Gauss.

The objective of this test is to verify the performance of the compass subsystem. The compass readings were obtained along the x, y, and z axes, which play a crucial role in navigation and orientation. The table below presents the recorded x, y, and z values for each measurement, providing insights into the performance of the compass subsystem.


### Data Analysis:

The collected compass data, taken in both the Capstone lab and outside the building:

| Environment  | Raw X | Raw Y | Raw Z | Heading | Corrected Sensor Reading |
|--------------|-------|-------|-------|---------|-------------------------|
| Capstone Lab | -5    | 40    | -97   | 97.13   | 95.5915                |
| Capstone Lab | -22   | 26    | -108  | 130.24  | 128.7355               |
| Capstone Lab | -45   | -99   | -150  | 245.56  | 243.8755               |
| Capstone Lab | -61   | -109  | -141  | 240.77  | 238.9155               |
| Capstone Lab | 100   | -37   | -143  | 339.70  | 337.7955               |
| Capstone Lab | 2     | 46    | -81   | 87.51   | 85.8055                |
| Capstone Lab | -72   | 17    | -80   | 166.72  | 164.9155               |
| Capstone Lab | -103  | 9     | -52   | 175.01  | 173.3055               |
| Capstone Lab | -117  | -80   | -76   | 214.36  | 212.6555               |
| Outside      | -154  | -15   | 73    | 185.56  | 183.8555               |
| Outside      | -156  | -14   | 75    | 185.13  | 183.4255               |
| Outside      | -159  | -13   | 75    | 184.67  | 182.9655               |
| Outside      | -160  | -11   | 76    | 183.93  | 182.2155               |
| Outside      | -175  | -2    | 66    | 180.65  | 178.9455               |
| Outside      | -175  | -2    | 66    | 180.65  | 178.9455               |
| Outside      | -175  | -2    | 66    | 180.65  | 178.9455               |

### Interpretation and Analysis:
- Precision limitations: The corrected sensor readings exhibit a precision of 0.73 mG/LSb, meeting the specified digital resolution requirement.

- Sensor Calibration: The periodic calibration, incorporating the correction factor of approximately 1.7045 LSb, compensates for the consistent bias of 1.5 Gauss, ensuring accurate readings.

<img width="362" alt="image" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/919b4ba9-9635-4c6f-85e2-4b162952bc78">

The experimental analysis indicates that the compass, with the implemented measures and calibration, meets the specified constraints and measures of success.





## Motor/Chassis Experiment:

### Experimental Objective/Goal:
The objective of the motor/chassis experiment is to prove that the Croomba can navigate inclines of up to 30 degrees. Reaching this goal will prove that the Croomba is able to handle various environments, showing the versatility of the robot. To test this, the Croomba will navigate on both slick and carpet surfaces while on incline.

### Croomba Adjustments:
The Croomba has received updates to both the chassis and motor.

### Experimental Design/Procedure:
This experiment is conducted with materials found in our lab. Wooden planks are stacked up with a ramp to simulate an incline. Each plank added shows an incline increase of 5 degrees. An angle finder was used to confirm angle measurements. The robot will start at the beginning of a wooden slab and move until it has attempted to clear the incline. 10 Trials will be run for each incline. The first 5 trials will be on a slick wooden surface while the last 5 trials will be on a carpet-like surface. 

![IMG_5411](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/eae6ceb0-a2b5-4ba0-8828-72b634db60ae)
Caption: Experiment Set-up

### Results of Experiment:

#### 5 Degree Incline:

|      | Slick Surface     | Carpet Surface |
| ---- | ----------------- | -------------- |
| Test | Croomba Ascension |
| 1    | Yes               | Yes            |
| 2    | Yes               | Yes            |
| 3    | Yes               | Yes            |
| 4    | Yes               | Yes            |
| 5    | Yes               | Yes            |

#### 10 Degree Incline:

|      | Slick Surface     | Carpet Surface |
| ---- | ----------------- | -------------- |
| Test | Croomba Ascension |
| 1    | Yes               | Yes            |
| 2    | Yes               | Yes            |
| 3    | Yes               | Yes            |
| 4    | Yes               | Yes            |
| 5    | Yes               | Yes            |

#### 15 Degree Incline:

|      | Slick Surface     | Carpet Surface |
| ---- | ----------------- | -------------- |
| Test | Croomba Ascension |
| 1    | No               | Yes            |
| 2    | No               | Yes            |
| 3    | No               | Yes            |
| 4    | No               | Yes            |
| 5    | No               | Yes            |

#### 20 Degree Incline:

|      | Slick Surface     | Carpet Surface |
| ---- | ----------------- | -------------- |
| Test | Croomba Ascension |
| 1    | No               | Yes            |
| 2    | No               | Yes            |
| 3    | No               | Yes            |
| 4    | No               | Yes            |
| 5    | No               | Yes            |

#### 25 Degree Incline:

|      | Slick Surface     | Carpet Surface |
| ---- | ----------------- | -------------- |
| Test | Croomba Ascension |
| 1    | No               | Yes            |
| 2    | No               | Yes            |
| 3    | No               | Yes            |
| 4    | No               | Yes            |
| 5    | No               | Yes            |

#### 30 Degree Incline:

|      | Slick Surface     | Carpet Surface |
| ---- | ----------------- | -------------- |
| Test | Croomba Ascension |
| 1    | No               | No            |
| 2    | No               | No            |
| 3    | No               | No            |
| 4    | No               | No            |
| 5    | No               | No            |

### Analysis of Experiment:
After reviewing the experiment, the Croomba has made huge progress. Previously, the Croomba would flip backward due to improper weight distribution. Now, at most, it just continues to move in place. Previously, the maximum incline the Croomba could climb was 15 degrees. Currently, the Croomba can handle 25 degrees. The Croomba was able to handle 0-10 degrees without any issues. At 15 degrees, the Croomba was not able to climb the slick wooden surface. We think this is because of the current tracks on the Croomba. The tracks currently used are engineering plastic. The Croomba was able to climb the 15-degree incline when on the carpet surface. This was because the tracks had more traction on this surface. During the 20-30 degree test, the Croomba had the same results during the slick surface test. Due to weight, the Croomba was unable to climb the 30-degree incline on the carpet surface. The change in design for the chassis along with the change of motors has helped the goal become more obtainable. We hope that the next Croomba revision will be able to meet our goal.

### Possible Solutions:
Replacing the tracks on the Croomba will help with its difficulty climbing certain surfaces. Increasing the motor speed is another possibility.

