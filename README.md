# ESP32-CAM Basics

<img width="1600" height="900" alt="image" src="https://github.com/user-attachments/assets/c768c12d-c200-4a5b-8c77-ca96a1a631c7" />


**Environment**

* **IDE:** PlatformIO
* **Programmer:** ESP32-CAM-MB
* **Platform:** Ubuntu 22.04 LTS
* **Example:** Blink (Flash LED on GPIO 4)



## 1 - Blink

This example toggles the onboard camera flash LED (GPIO 4) in the traditional Arduino Blink fashion.


### Troubleshooting

Some errors I encountered and working fixes.

#### Error 1:

#### `[Errno 13] could not open port /dev/ttyS0: Permission denied`

**Cause:** `/dev/ttyS0` is your PC’s built-in serial port. PlatformIO is using it because it couldn't detect your ESP32-CAM.

**Fix**

1. Unplug and re-plug the ESP32-CAM.
2. Try a different USB port.
3. Ensure your correct port (`/dev/ttyUSB0`) is selected in `platformio.ini`.



#### Error 2:

#### `Could not open /dev/ttyUSB0, the port is busy or doesn't exist`

#### `Permission denied: '/dev/ttyUSB0'`

**Cause:** You do not have permission to access USB serial ports.

**Fix**

1. Add yourself to the `dialout` group:

   ```bash
   sudo usermod -a -G dialout $USER
   ```
2. **Reboot your PC** (I tried logging out & in again but that didn't work; rebooting worked).



#### Error 3:

#### `Failed to connect to ESP32: No serial data received`

**Cause:** ESP32-CAM did not enter flashing mode / needs manual reset timing.

**Fix**

1. Click **Upload** in PlatformIO.
2. When the terminal shows:

   ```
   Connecting....
   ```
3. Press the **RESET** button on the ESP32-CAM-MB and release.
4. Flashing should begin.

---

# 2 - Camera Web Server

*WIP*


