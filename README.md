SPI communication with an OLED display
I2C communication with BME280 (temperature, humidity, pressure) and MPU6050 (accelerometer, gyroscope)
Wi-Fi communication using MQTT to send data to a cloud platform (AWS IoT or any MQTT broker)

**The provided code sets up an ESP32-based Smart Home Sensor Hub. It:**

Uses SPI for an OLED display.
Uses I2C for BME280 (temperature, humidity, pressure) and MPU6050 (accelerometer, gyroscope).
Connects to Wi-Fi and sends sensor data to an MQTT broker.
Displays real-time sensor data on the OLED screen.

**Connect Your Sensors Properly**
BME280 and MPU6050 should be connected via I2C (SDA to GPIO21, SCL to GPIO22 on ESP32).
OLED Display should be connected via SPI.

**Upload the Code**
Open the file in Arduino IDE or PlatformIO.
Select the correct board (ESP32 Dev Module).
Compile and upload the code.

**Monitor Data**
Open Serial Monitor (baud rate: 115200) to check if data is being transmitted.
If using MQTT, use an MQTT client (e.g., MQTT Explorer) to verify messages.

**What's Already Covered in the Code**
✔ SPI Communication with OLED Display
✔ I2C Communication with BME280 (Temp, Humidity, Pressure)
✔ I2C Communication with MPU6050 (Accelerometer, Gyroscope)
✔ Wi-Fi Connection
✔ MQTT Data Transmission
