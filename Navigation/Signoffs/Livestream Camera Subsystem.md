# Livestream Camera Subsystem

# Function of the subsystem

The function of the camera subsystem is to provide a live video feed of the surroundings to a remote-control device, enabling the operator to visually navigate the robot in real-time.

# Constraints 

## Constraint 1 - Real-Time Video Streaming:
The camera subsystem shall provide a continuous and uninterrupted live video feed in real-time to the remote-control device with a bit rate of 60 Mb/s, enabling smooth navigation with minimal delay (latency of 16.67 milliseconds)

## Constraint 2 - High-Quality Video:
The camera shall provide a high-quality video feed with a resolution of 1080p and a bit rate of 10 Mbps, ensuring clear and detailed visuals for obstacle identification, environment evaluation, and informed decision-making during robot navigation. The camera shall also support a frame rate of 30 fps for smooth motion in the video feed.

## Constraint 3 - Low-Light Performance:
The Camera (1/3-inch sensor, f/2 aperture) shall provide a live video feed for real-time navigation in challenging low-light conditions. It ensures clear and well-lit footage, including in crawlspace environments, with ISO settings up to 6400.


# Buildable Schematics
## 3D Model

<img width="399" alt="Screenshot 2023-10-17 at 4 48 04 PM" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/aa6fea5d-b097-40df-8907-404f55e1c182">

<br>

<img width="399" alt="Screenshot 2023-10-17 at 4 48 12 PM" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/faf45abc-9307-4d67-b009-62d7dd801afb">


## How to connect 

<img width="397" alt="Screenshot 2023-10-17 at 4 48 50 PM" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/620af0a0-6cc8-4904-903a-955701c7381f">

<br>

<img width="399" alt="Screenshot 2023-10-17 at 4 48 40 PM" src="https://github.com/JoshuaEgwuatu/Fall-2023-Autonomous-Crawlspace-Inspection-Robot/assets/112426690/f4c26312-6092-4dd5-8d28-03321a50ff85">

>>  For the camera:
>>  - install the AKASO GO app
>>  - The AKASO GO app lets you control your camera remotely using a smartphone or tablet. Features include camera control, live preview, playback, download, settings and editing
>>  For the REMOTE:
>>  - To record a video, verify the camera is in Video mode.
>>  - To start recording: Press the Grey Video Button. The camera will emit one beep and the camera light will flash while recording.
>>  - To stop recording: Press the Grey Video Button again. The camera will emit one beep and the camera light will stop flashing.



<br>

# Analysis

## Analysis 1:

from the datasheet of AKASO EK7000 Action Camera:

- For 4K resolution: 25 frames per second (fps)
- For 2.7K resolution: 30 fps
- For 1080p resolution: 60 fps
- For 720p resolution: 120 fps

<br>

- 4K resolution:
  - Bitrate = 60 Mb = 60,000,000 bits
  - Frame rate = 25 fps
  - Data per frame = Bitrate / Frame rate = 60,000,000 / 25 = 2,400,000 bits/frame
  - Data per second = Data per frame * Frame rate = 2,400,000 * 25 = 60,000,000 bits/s = 60 Mb/s

- 2.7K resolution:
  - Bitrate = 60 Mb = 60,000,000 bits
  - Frame rate = 30 fps
  - Data per frame =  60,000,000 / 30 = 2,000,000 bits/frame
  - Data per second = 2,000,000 * 30 = 60,000,000 bits/s = 60 Mb/s

- 1080p resolution:
  - Bitrate = 60 Mb = 60,000,000 bits
  - Frame rate = 60 fps
  - Data per frame = 60,000,000 / 60 = 1,000,000 bits/frame
  - Data per second = 1,000,000 * 60 = 60,000,000 bits/s = 60 Mb/s

- 720p resolution:
  - Bitrate = 60 Mb = 60,000,000 bits
  - Frame rate = 120 fps
  - Data per frame = 60,000,000 / 120 = 500,000 bits/frame
  - Data per second = 500,000 * 120 = 60,000,000 bits/s = 60 Mb/s

 <br>
 
Tt can be observed that for all the resolutions considered (4K, 2.7K, 1080p, and 720p), the camera's bitrate of 60 Mb/s is sufficient to transmit the video data in real-time without any delay. The camera can provide a continuous and uninterrupted live video feed to the remote-control device, allowing for minimal delay during navigation.

<br>

 Latency = (1 / Frame Rate) * 1000 milliseconds = (1 / 60) * 1000 = 16.67 milliseconds

<br>

In order to meet the broadcast quality standard, it is generally expected to have a latency of less than 60 milliseconds. The AKASO EK7000 Action Camera's latency of around 16.67 milliseconds is well below this standard, ensuring a live video feed with minimal delay.

<br>

## Analysis 2:

- Resolution:
  -  1080p resolution (1920x1080 pixels) as a benchmark for high-quality video.

- Bitrate:
  - Bitrate range of 10-15 Mbps (10,000,000 - 15,000,000 bits per second)

- Frame Rate:
  - Standard frame rate of 30 frames per second 

 <br>
 
- Data per frame = 10,000,000 bits / 30 fps = 333,333.33 bits/frame
- Data per second = 333,333.33 bits/frame * 30 fps = 10,000,000 bits/s = 10 Mbps

<br>

the camera can provide a high-quality video feed in 1080p resolution. 

<br>

This ensures clear and detailed visuals of the surroundings, allowing the operator to identify obstacles, evaluate the environment, and make informed decisions while navigating the robot.

<br>

## Analysis 3:


- Sensor Size:
  - The camera has a photo sensor size of 1/3-inch.
- Maximum Aperture:
  - The maximum aperture is f/2.
- ISO Sensitivity:
  - The camera offers a range of ISO values, including Auto, 100, 200, 400, 800, 1600, 3200, and 6400
- aperture:
  - maximum aperture of f/2
  - N = 2
- Exposure Value (EV):
  - EV = log2(N^2 / t) = log2(2^2 / 1) = log2(4) ≈ 2

<br>

the camera should perform reasonably well in low-light conditions.

<br>

The higher ISO values, such as 1600, 3200, and 6400, tend to introduce more image noise, while lower ISO values, such as 100 and 200, produce cleaner images with less noise.

<br>

with a 1/3-inch sensor size and an aperture of f/2, the AKASO EK7000 Action Camera should offer decent low-light performance, and the availability of multiple ISO settings allows for flexibility in adjusting the camera's sensitivity to light.

<br>

# BOM

| Name of Items | Description                 | Used in which subsystem(s)  | Part Number | Manufacturer     | Quantity | Price      | Total  |
| --------------| --------------------------- | --------------------------- | ----------- | ---------------- | -------- | ---------- | ------ |
| AKASO Camera  | AKASO EK7000 Action Camera  | Livestream Camera Subsystem | EK7000      | akasotech        | 1        | $69.99     | $69.99 |
|               |                             |                             |             | Total Components | 2        | Total Cost | $69.99 |


# References

https://www.akasotech.com/imageApi//support/user_manual_pictures/47032_ek7000v2.pdf

https://www.akasotech.com/usermanual/ek7000.pdf

https://havecamerawilltravel.com/gopro/akaso-ek7000-action-camera-review/

https://thetechnologyman.com/akaso-ek7000-4k-action-camera-review-budget-gopro-sample-footage-compared-to-gopro-hero-5-black/

https://www.bhphotovideo.com/c/product/1715406-REG/akaso_ek_7000_ek7000_action_camera.html





