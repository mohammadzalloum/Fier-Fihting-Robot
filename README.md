<img src="https://github.com/user-attachments/assets/1dda656f-7a32-47fc-aaad-4e05de6140a6" alt="Robot image" style="width: 400px; max-width: 100%; height: auto;" />

# 🤖 Fire-Fighting Robot

This is a fire-fighting robot designed to detect and respond to both fire and gas leaks. It integrates a 6 DOF robotic arm and various sensors, and can be fully controlled via a mobile application using the ESP32 microcontroller.

---

## 🚀 Features

- 🔥 **Flame detection** using flame sensors
- 🧪 **Gas leak detection** with real-time alerts
- 🤖 **6 DOF Robotic Arm** to interact with environment
- 💨 **Air Pump** to help extinguish fire
- 📱 **Remote control** via mobile app over WiFi
- 🔋 Powered by 18650 battery pack

---

## 🧰 Components Used

| Component                        | Description                     |
|----------------------------------|---------------------------------|
| ESP32 WROOM                     | Main microcontroller (WiFi)     |
| Breadboard                      | Prototyping connections         |
| 4-Channel Relay Module (5V)     | Control high-current devices    |
| Relay Module (5V)               | Control air pump independently  |
| L298N Motor Driver              | Drive DC motors                 |
| Flame Sensor                    | Detects presence of fire        |
| Gas Sensor                      | Detects gas leaks               |
| Servo Motor                     | Control robotic arm             |
| DC Motors                       | Robot movement                  |
| Air Pump                        | Assists in extinguishing fire   |
| Battery Holder (4x 18650)       | Power source                    |
| 6 DOF Robotic Arm Kit           | Performs physical tasks         |

---

## 🤳 Robot Photo

Here is a photo of the assembled robot:

![Robot Image](Robot%20image.png) <!-- تأكد إن الصورة مرفوعة بهذا الاسم داخل المستودع -->

---

## 🧠 How It Works

1. Sensors continuously monitor for fire or gas.
2. When detected, the robot can:
   - Trigger alerts via app
   - Move towards the source
   - Use air pump to assist in extinguishing
   - Operate robotic arm for custom actions
3. All operations can be controlled manually via mobile app.

---
## 📱 Mobile App

The robot is fully controllable from a mobile application. The app allows:

- Real-time movement control
- Sensor data display
- Notifications when fire or gas is detected
- Manual activation of arm and air pump

## 📜 License

This project is licensed for **personal and educational use only**.  
**Commercial use, redistribution, or sale of this project or its derivatives is strictly prohibited.**  


