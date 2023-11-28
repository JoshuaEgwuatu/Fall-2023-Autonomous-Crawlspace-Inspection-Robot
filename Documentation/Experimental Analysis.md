# Experimental Analysis

##  Compass Experiment:

### Experimental Design:
The objective of this test is to verify the performance of the compass subsystem. The compass readings were obtained along the x, y, and z axes, which play a crucial role in navigation and orientation. The table below presents the recorded x, y, and z values for each measurement, providing insights into the performance of the compass subsystem.

### Interpretation of the data:
Data Table:
|    Raw X   |   Raw Y  |   Raw Z  |   Heading  |
|------------|----------|----------|------------|
|     -5     |    40    |    -97   |   97.13    |
|    -22     |    26    |   -108   |   130.24   |
|    -45     |   -99    |   -150   |   245.56   |
|    -61     |   -109   |   -141   |   240.77   |
|    100     |   -37    |   -143   |   339.70   |
|     2      |    46    |    -81   |   87.51    |
|    -72     |    17    |    -80   |   166.72   |
|   -103     |     9    |    -52   |   175.01   |
|   -117     |   -80    |    -76   |   214.36   |

<img width="519" alt="image" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/2f00c669-badd-4002-95ee-1d1bf263472c">

- Raw X: This column represents the raw X-axis value measured by the compass.
- Raw Y: This column represents the raw Y-axis value measured by the compass.
- Raw Z: This column represents the raw Z-axis value measured by the compass.
- Heading: This column represents the heading angle in degrees, which indicates the direction the compass is pointing.

For each set of measurements, the values for Raw X, Raw Y, and Raw Z indicate the magnetic field strength along the respective axes. The Heading value indicates the angle in degrees relative to a reference direction  (north).

The compass readings were compared by rotating the compass in different directions and noting any deviations. The experiments conducted sufficiently established the value of the compass subsystem. 





## Motor

### Experimental Design:
The motor subsystem can navigate steep inclines of up to 30 degrees and challenging environments. Motor encoders and advanced control algorithms ensure accurate speed measurement for real-time feedback. Wooden planks are used with a ramp to simulate an incline. Each ramp is approximately showing 5-degrees. A cloth was used later in the experiment due to problems with treads sliding on the ramp surface. This also better represents real-world application. An asterisk (*) will be put in for all the places the cloth was used.
![IMG_5389](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/84891ef0-8833-40f2-80e5-de6bdbc2fa3c)

### Interpretation of the data:
Data Table:

| Incline Angle | Croomba Ascension  |
|---------------|--------------------|
| 30*            | No                   |
| 30*            | No                   |
| 25*            | Yes!                   |
| 25*            | Yes!                   |
| 20*            | Yes!                   |
| 20*            | Yes!                   |
| 15*            | Yes!                   |
| 15            | No                   |
| 10            | Yes!                   |
| 10            | Yes!                   |
| 5            | Yes!                   |
| 5            | Yes!                   |

As you can see we are very close to our goal!

