# Livestream Camera Subsystem
# Function of the subsystem

The Camera Subsystem of the Autonomous Crawlspace Inspection Robot is to capture real-time video footage of the crawlspace and transmit it to a central control unit for immediate viewing and assessment.


# Constraints:

## Constraint 1:
Bandwidth constraint - The robot's communication system shall be limited to 10 Mbps (which may impede real-time video transmission)

## Constraint 2:
The 384KB frame buffer and JPEG compression support of the camera shield shall be assessed for capturing and transmitting real-time video footage at 800x600 resolution and 30 frames per second.


# Buildable Schematics
## 3D Model
<img width="368" alt="Screenshot 2023-10-11 at 4 56 40 AM" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/4a398202-e170-468b-96c3-fdeea07ec0f7">

<img width="449" alt="Screenshot 2023-10-11 at 4 56 23 AM" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/90ff1125-d73a-4f51-a5dc-b7296859707b">


## Electrical Schematics

### Full Schematic
![NEW_SCH](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/cbccd3d2-080b-4a47-a381-cb705fc57905)


### Camera Schematic
![CAM_NEW](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/80711f83-fd7b-4128-8e17-68c5a1e29fc6)

<img width="674" alt="Screenshot 2023-10-11 at 12 50 23 PM" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/bc0abdbc-2050-4b98-8bdf-0a8cc5f648ff">



# Analysis

(This table is designed to display crucial information about the camera, along with the methodology used to calculate the information provided below)

|         Key         |         Specifications       |
|---------------------|------------------------------|
| Power supply Normal | 5V/70mA                      |
| Low power mode      | 5V/20mA                      |
| SPI speed           | 8MHz                         |
| Frame buffer        | 384KB                        |
| Size                | 34x24mm                      |
| Weight              | 20g                          |
| Temperature         | -10 °C~+55°C                 |
| Active array size   | 1600x1200                    |
| Shutter             | rolling shutter              |
| Lens                | 1/4 inch                     |
| Resolution support  | UXGA, SVGA,VGA,QVGA,CIF,QCIF |
| Format support      | RAW, YUV, RGB, JPEG          |
| Pixel Size          | 2.2μm x 2.2μm                |


## Analysis 1:

The ArduCAM-M-2MP Camera Shield supports a maximum resolution of 1600x1200 pixels, which corresponds to a frame size of 1,920,000 pixels (1600 x 1200). Each pixel requires 24 bits 

data Size per Frame = 1,920,000 pixels x 24 bits = 46,080,000 bits = 5.76 MB

we need to consider the available bandwidth to calculate the maximum achievable frame rate = 10 Mbps / 46,080,000 bits = 0.217 FPS

The limited bandwidth of 10 Mbps may impede real-time video transmission from the ArduCAM-M-2MP Camera Shield. The maximum achievable frame rate is 0.217 FPS, which is significantly lower than the desired real-time video transmission rate.

we decide to enhence the maximum achievable frame rate by lowering the resolution

we are reducing the resolution of the video to 800x600 pixels, the new frame size would be 480,000 pixels (800 x 600)

data size per frame = 480,000 pixels x 24 bits = 11,520,000 bits 
Max frame rate = 10 Mbps / 11,520,000 bits ≈ 0.868 FPS

By lowering the resolution to 800x600 pixels, the maximum achievable frame rate has increased to 0.868 . This allows for a higher frame rate within the given bandwidth constraint.


## Analysis 2:

From the above tabel:
- Camera Shield frame buffer size: 384KB = 384,000 bytes
- Resolution: 1600x1200 pixels
- Frame rate: 30 frames per second

data size per frame = 1600 pixels x 1200 pixels x 3 bytes per pixell 5,760,000 bytes = 5.76 MB
data rate = 5.76 MB x 30 frames per second = 172.8 MB per second = 1382.4 Mbps

The camera bandwidth is not sufficient to handle the required data rate for real-time video transmission at the desired resolution and frame rate. we are going to enhance the real-time video transmission by reducing the resolution to 800x600 pixels.

- Resolution = 800x600 
- New frame size = 480,000 pixels. 
- Each pixel requires 24 bits

data size per frame =480,000 pixels x 24 bits = 11,520,000 bits
data rate = 11,520,000 bits x 30 frames per second = 345.6 Mbps. The bandwidth is still not sufficient, so we will implementing JPEG compression to enhence it. 

The ArduCAM-M-2MP Camera Shield supports JPEG compression mode (so this can reduce the data size per frame).
compressed data size per frame = 11,520,000 bits / 10 = 1,152,000 bits = 144,000 bytes

compressed data rate = 1,152,000 bits x 30 frames per second = 34,560,000 bits per second = 34.56 Mbps

The bandwidth is sufficient to handle the compressed data rate for real-time video transmission at 800x600 resolution and 30 frames per second.

# BOM

| Name of Items   | Description                 | Used in which subsystem(s)  | Part Number | Manufacturer     | Quantity | Price      | Total  |
| -------------   | --------------------------- | --------------------------- | ----------- | ---------------- | -------- | ---------- | ------ |
| 2MP SPI Camera  | ArduCAM-M-2MP Camera Shield | Livestream Camera Subsystem | OV2640      | Arducam          | 1        | $14.99     | $14.99 |
| ARDUINO MEGA    | 2560 REV3                   | Livestream Camera Subsystem |             | A000067          | 1        | $48.99     | $48.99 |
|                 |                             |                             |             | Total Components | 2        | Total Cost | $63.98 |

# References

https://marketing.istockphoto.com/blog/what-is-video-compression/

https://www.coconut.co/articles/how-do-i-calculate-the-required-bandwidth-for-streaming-a-video-with-a-certain-resolution-and-frame-rate

https://www.ece.ucf.edu/seniordesign/fa2021sp2022/g21/pdfs/Group%2021%20Final%20Document%20EEL4915.pdf

https://www.quora.com/How-do-I-calculate-the-size-of-a-1-second-video-file-that-has-30-frames-per-second-and-640-x-480-pixels-with-24-bits-of-color-information

https://www.getfpv.com/betafpv-c02-2-1mm-1200tvl-fpv-micro-camera.html

https://www.avaccess.com/blogs/guides/h264-vs-h265-difference/

https://forums.raspberrypi.com/viewtopic.php?t=268356

https://www.reddit.com/r/raspberry_pi/comments/e64bl6/is_the_4bs_h265_hardware_decode_currently/

https://www.evercast.us/blog/low-latency-video-conferencing

https://en.wikipedia.org/wiki/Raspberry_Pi

https://betafpv.com/products/c01-fpv-micro-camera

https://www.reviews.org/internet-service/what-is-internet-latency/

https://www.arducam.com/downloads/shields/ArduCAM_Mini_2MP_Camera_Shield_DS.pdf

https://docs.arducam.com/Arduino-SPI-camera/Legacy-SPI-camera/Hardware-Connection-for-MEGA2560/


