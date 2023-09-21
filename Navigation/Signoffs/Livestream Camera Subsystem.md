# Livestream Camera Subsystem
# Function of the subsystem

The live stream camera on the Raspberry Pi enables real-time video transmission for seamless communication between the robot and the central control unit. The BetaFPV C02 2.1mm 1200TVL FPV Micro Camera was selected and connected to the Raspberry Pi for this purpose, enhancing inspection capabilities and facilitating informed decision-making.


# Constraints:

The bandwidth BetaFPV C02 camera = 1200 pixels × 30 fps × 24 bits × 10 = 8,640,000 bps
8,640,000 bps / 1,000,000 = 8.64 Mbps
The available bandwidth in the crawlspace area is limited to 8.64 Mbps. This limited bandwidth can impact the quality of the live video feed. To have the optimal performance, the design criteria should focus on operating the video streaming system within this bandwidth constraint. 

The second constraint is latency, or the delay in real-time video streaming. The latency introduced during real-time video streaming should be minimized to ensure responsive remote control and guidance of the robot. The aim is to keep it between 20-40 milliseconds, but up to 100 milliseconds can work.

The Raspberry Pi 4 has limitations like a 1.5 GHz quad-core CPU and different RAM options (2, 4, or 8 GB). These limits may affect the camera's ability to handle high-resolution videos above 1080p at 30 frames per second. Additionally, if the camera must process complex image tasks, it could cause delays beyond the ideal range of 20-40 milliseconds, affecting the video's responsiveness.


## Specifications and Constraints:

1- Bandwidth Constraint: Limited bandwidth in the crawlspace (8.64 Mbps) affects video quality and reliability.

2- Latency Constraint: Real-time video streaming should have minimal latency (20-40 milliseconds, up to 100 milliseconds acceptable) for responsive remote control.

3- Raspberry Pi Limitations: Raspberry Pi's processing limitations (1.5 GHz quad-core CPU, various RAM options) impact high-resolution video handling and video responsiveness.




# Analysis

The bandwidth in the crawl space area may affect the quality and reliability of the video feed. The camera has a resolution of 1200TVL, a 1/4" CMOS sensor, and a 2.1mm lens with a FOV of 160°. The resolution is 1200 pixels. The frame rate is 30 fps. Common bit depth of 24 bits (8 bits per channel) and a compression ratio of 10:1

Bandwidth = Resolution × Frame Rate × Bit Depth × Compression Ratio

The bandwidth for streaming real-time video from the BetaFPV C02 camera = 1200 pixels × 30 fps × 24 bits × 10 = 8,640,000 bits per second (bps)

Convert bits per second to megabits per second (Mbps):
Total bits per second = 8,640,000 bps
Total megabits per second (Mbps) = Total bits per second / 1,000,000 = 8,640,000 bps / 1,000,000 = 8.64 Mbps

The C02 camera requires approximately 8.64 Mbps of bandwidth to stream real-time video. Based on the bandwidth of 8.64 Mbps for the video feed, the Raspberry Pi 4 Model B, should be able to handle the processing demands in real-time without compromising the quality. The Raspberry Pi 4 Model B is capable of handling high-resolution video streams and can decode H.265 (HEVC) and H.264 (AVC) video codecs. It supports up to 4K video playback. The quad-core ARM Cortex-A72 CPU and VideoCore VI GPU of the Raspberry Pi 4 Model B indicate sufficient processing capabilities.

By comparing the original data size with the compressed data size, the compression ratio is 10:1, which means that the compressed data size is 1/10th of the original data size. The video data can be significantly reduced in size without compromising the quality too much. This allows for more efficient transmission and reduces the bandwidth consumption. “Higher compression ratios may result in a loss of video quality, such as reduced sharpness or increased artifacts.”

The BetaFPV camera is a small and lightweight camera. It has a higher resolution than the minimum requirement for good video quality. It uses the NTSC system, which supports smooth video at around 30 frames per second. The camera is power-efficient, drawing low current at both 3.3V and 5V. It also offers a wide field of view of 160°. Overall, it is an affordable option that meets video quality requirements while being lightweight and power-efficient. 

# Buildable Schematics
## 3D Model

![51vFJ99uRbL _AC_SL1500_](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/03166f07-04a7-4f2e-8387-a29d586f11c4)


## Electrical Schematic

![CAMERA](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/d2765664-6fcb-4128-ad6b-75120bb324fe)

# BOM

| Name of Items | Description                                | Used in which subsystem(s)  | Part Number | Manufacturer     | Quantity | Price      | Total  |
| ------------- | ------------------------------------------ | --------------------------- | ----------- | ---------------- | -------- | ---------- | ------ |
| Micro Camera  | BetaFPV C02 2.1mm 1200TVL FPV Micro Camera | Livestream Camera Subsystem | 16852       | BETAFPV          | 1        | $14.99     | $14.99 |
|               |                                            |                             |             | Total Components | 1        | Total Cost | $14.99 |

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
