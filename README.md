# 🌱 Hydroponic Tower

A **modular hydroponic tower** designed for space-saving and efficient plant growth. Using 3D-printed components, you can build your own vertical hydroponic system. 🚀

[![forthebadge](https://forthebadge.com/images/badges/powered-by-coffee.svg)](https://forthebadge.com)
[![forthebadge](https://forthebadge.com/images/badges/made-with-c-plus-plus.svg)](https://forthebadge.com)
[![forthebadge](https://forthebadge.com/images/badges/open-source.svg)](https://forthebadge.com)
[![forthebadge](https://forthebadge.com/images/badges/license-mit.svg)](https://forthebadge.com)
[![forthebadge](https://forthebadge.com/images/badges/works-on-my-machine.svg)](https://forthebadge.com)

---

## 📌 Features
- **Modular design** – Expandable with stackable segments ✅
- **Easy assembly** – 3D-printable parts with optimized fit ✅
- **Water-efficient** – Saves up to 90% water compared to soil-based methods ✅
- **Space-saving** – Perfect for indoor gardens or balconies ✅
- **No soil required** – Plants grow in a nutrient solution ✅

---

## 🎨 3D Printing

🖨 **Recommended print settings:**
- **Material:** PLA or PETG (PETG recommended for higher moisture resistance)
- **Layer height:** 0.2 mm
- **Infill:** 15–30%
- **Supports:** Not required

📂 **STL files are available in the repository:** [Click here](./STL)

---

## 🛠️ Materials & Components

### **🔩 Mechanical Hardware:**
- **Water pump (5V or 12V recommended)** – For automated water circulation
- **PVC or silicone tubes** – For water flow management
- **Net pots (50 mm or 75 mm)** – For plant placement
- **Hydroponic nutrient solution** – For plant growth
- **Water container (e.g., 15L bucket)** – Holds the nutrient solution

### **🖥 Software & Electronics:**
- **ESP32-S3 (Waveshare) with IPS LCD** – Main controller with display for monitoring & control
- **Adafruit DS1307 RTC Module** – Real-time clock for precise scheduling
- **VARTA Knopfzelle CR1220** – Battery for RTC backup
- **DFRobot Capacitive Water Level Sensor** – Monitors water level in the reservoir
- **Elecrow G1/2" Water Flow Sensor** – Measures water flow to detect pump failures
- **Real-time clock (RTC) for pump scheduling**
- **Capacitive water level sensor** to prevent dry-run situations
- **Flow sensor to measure and validate water movement**
- **Expandable with additional sensors (pH, EC, temperature)**
- **WiFi/MQTT integration for remote monitoring**

---

## 📥 Downloads & Resources

🔗 **3D models & templates:**
- [MakerWorld model](https://makerworld.com/de/models/65860?from=search#profileId-78967)
- [Printables Modular Tower](https://www.printables.com/model/691117-modular-hydroponic-tower-garden-dispenser-lid-low-/files)
- [YouTube assembly video](https://www.youtube.com/watch?v=fMD0a88BzLg)
- [Additional Printables template](https://www.printables.com/model/856640-hydroponic-tower)

📂 **STL files are available in this repository under** [`/STL`](./STL)
📂 **PCB design files are available under** [`/PCB`](./PCB)

---

## 🏗️ Assembly & Usage
1️⃣ **Print all required components.**
2️⃣ **Assemble the tower:** Stack the modules to the desired height.
3️⃣ **Connect the tubes to the pump.**
4️⃣ **Insert net pots & fill the tank with water/nutrient solution.**
5️⃣ **Connect the pump & test!**

💡 **Tip:** Use the timer every hour for efficient watering.

---

## 🎯 Improvements & Ideas
💡 **pH & EC sensors:** Monitor nutrient quality
💡 **Automated dosing system:** Adjust pH levels automatically
💡 **LED grow lights:** Improve plant growth indoors
💡 **WiFi/MQTT integration:** Remote monitoring & control

---

## 🏆 License
This project is licensed under the **MIT License** – Feel free to use, modify & share! 🌿

---

💬 **Feedback or questions?** Open an issue! 🚀
