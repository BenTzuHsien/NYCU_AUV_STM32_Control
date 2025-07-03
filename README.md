# NYCU AUV STM32 Control

This repository contains the STM32-based firmware for controlling the NYCU Autonomous Underwater Vehicle (AUV).  
It enables real-time motion and attitude control using various onboard sensors, including:

- **IMU** (Inertial Measurement Unit) for orientation and angular velocity
- **DVL** (Doppler Velocity Log) for velocity estimation
- **Pressure Sensor** for depth measurement

## Features

- Real-time sensor data processing
- Modular control architecture
- Stable attitude and motion control
- Designed for STM32 microcontrollers (e.g., STM32F4 series)

## Directory Structure
NYCU_AUV_STM32_Control/
├── Core/ # Main application source and headers
│ ├── Inc/
│ └── Src/
└── Drivers/ # Peripheral HAL drivers

## Requirements
- STM32CubeIDE or compatible toolchain
- STM32 HAL libraries
- Target STM32 board (e.g., STM32F407)

## License
This project is developed for academic and research purposes by the NYCU AUV Team.
Please contact the maintainer for collaboration or usage beyond internal research.
