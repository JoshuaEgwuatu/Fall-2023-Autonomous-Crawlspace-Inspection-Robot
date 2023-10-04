# Livestream Camera Subsystem
# Function of the subsystem

The Camera Subsystem of the Autonomous Crawlspace Inspection Robot is to capture real-time video footage of the crawlspace and transmit it to a central control unit for immediate viewing and assessment.


# Constraints:

## Constraint 1:
The camera must be connected to a network with a stable and unrestricted bandwidth of at least 13.82 Mbps to ensure seamless video streaming without buffering or reduced video quality.

### information about Constraint 1:
Bandwidth Calculation: 
The bandwidth with a lower resolution, we reduce the resolution to 720p (1280x720): Bandwidth = 1280 × 720 × 30 × 10 × (1/20) = 13,824,000 bps = 13.82 Mbps.
The camera provides a video stream with a resolution of 1200 TVL (1280x1024) at 30 fps, using H.264 compression (compression ratio of 20:1 for H.264).
The required bandwidth is calculated to be 13.82 Mbps. Sufficient bandwidth is essential for seamless video streaming. When the available bandwidth is lower than the required minimum, it can lead to buffering or reduced video quality. The network conditions are unstable or restricted, consistently meeting the bandwidth requirement becomes difficult and impacts the viewing.


# Buildable Schematics
## 3D Model

![51vFJ99uRbL _AC_SL1500_](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/110966922/03166f07-04a7-4f2e-8387-a29d586f11c4)


## Electrical Schematics

### Full Schematic
![SCHEM UPD](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/998d5dda-b744-4d89-9901-1ade1d2202ef)


### Camera Schematic
![CAMERA](https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/19755576-0135-4692-8ceb-e5ab1326b489)



# Analysis

(This table is designed to display crucial information about the camera, along with the methodology used to calculate the information provided below)

| Item:          | C02 Camera              |
|----------------|-------------------------|
| Image Sensor:  | 1/4" CMOS Sensor        |
| Horizontal:    | 1200TVL with Global WDR |
| Signal System: | NTSC                    |
| Lens:          | 2.1mm(M8) FOV 160°      |
| S/N Ratio:     | >50db                   |
| Power:         | DC 3-5.5V               |
| Current:       | 110mA@5V / 120mA@3.3V   |
| Dimension:     | 13*11mm                 |
| Net weight:    | 1.4g                    |


The camera has a resolution of 1200TVL, a 1/4" CMOS sensor, and a 2.1mm lens with a FOV of 160°. The resolution is 1200 pixels. The frame rate is 30 fps. (the camera supports standard NTSC frame rates = 30 fps), using H.264 compression (compression ratio of 20:1 for H.264)
Bandwidth = 1280 × 1024 × 30 × 10 × (1/20) = 78,643,200 bps = 78.64 Mbps. With a bandwidth of 78.64 Mbps, there should be ample capacity to transmit real-time video from the Autonomous Crawlspace Inspection Robot. This bandwidth should enable a crisp video feed and a reliable connection, ensuring a seamless viewing experience.

The C02 camera requires approximately 78.64 Mbps of bandwidth to stream real-time video. Raspberry Pi 4 Model B comes with a Gigabit Ethernet, providing a network bandwidth of up to 1000 Mbps. the Raspberry Pi 4 Model B, should be able to handle the processing demands in real-time without compromising the quality. The Raspberry Pi 4 Model B is capable of handling high-resolution video streams and can decode H.265 (HEVC) and H.264 (AVC) video codecs. It supports up to 4K video playback. The quad-core ARM Cortex-A72 CPU and VideoCore VI GPU of the Raspberry Pi 4 Model B indicate sufficient processing capabilities.

The BetaFPV camera is a small and lightweight camera. It has a higher resolution than the minimum requirement for good video quality. It uses the NTSC system, which supports smooth video at around 30 frames per second. The camera is power-efficient, drawing low current at both 3.3V and 5V. It also offers a wide field of view of 160°. Overall, it is an affordable option that meets video quality requirements while being lightweight and power-efficient. 

The C02 Micro Camera is designed to have low latency, aiming to minimize any noticeable delay or lag in its video transmission.

The camera operates at a DC input of 3-5.5 volts. The power consumption of the camera:
- at 5V, the current is 110mA or 0.110A. the power consumption is 0.55W. 
- at 3.3V, the current is 120mA or 0.120A, the power consumption is  0.396W
<br>
The total power requirement for the camera: 0.55W + 0.396W = 0.946W
<br>
The operational time of the camera: 360W / 0.946W = 380 hours

We are connecting the BetaFPV C02 2.1mm 1200TVL FPV Micro Camera to the Raspberry Pi because the Raspberry Pi provides a dedicated Camera Serial Interface (CSI). The CSI interface ensures high-speed, low-latency communication between the camera and the Raspberry Pi, enabling us to capture and process video seamlessly. 



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

https://betafpv.com/products/c01-fpv-micro-camera

https://www.reviews.org/internet-service/what-is-internet-latency/
