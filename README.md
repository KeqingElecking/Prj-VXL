# Fall Detection Using MPU6050 and an Artificial Neural Network

This project implements a fall detection system using the MPU6050 sensor, neural networks, and an ESP32-based microcontroller. The system processes sensor data to detect falls with medium accuracy, making it useful in healthcare, sports, and safety applications.

---

## Table of Contents
- [Introduction](#introduction)
- [System Design](#system-design)
  - [Neural Network Model](#neural-network-model)
  - [Sensor Data Processing](#sensor-data-processing)
- [Implementation Details](#implementation-details)
  - [Hardware Components](#hardware-components)
  - [Software Architecture](#software-architecture)
- [Results](#results)
- [Future Improvements](#future-improvements)

---

## Introduction

Fall Detection (FD) involves identifying and classifying if the person falled or not based on sensor data. This project uses the MPU6050 sensor, which integrates an accelerometer and a gyroscope, to collect motion data for fall detection. Neural networks are employed to process and classify the data with high precision.

Applications include:
- Elderly health monitoring
- Sports performance optimization
- Industrial safety
- Public security surveillance

---

## System Design

### Sensor Data Processing

#### Data Collection
- **Sensor**: MPU6050
- **Sampling**: 
  - Frequency: 100 Hz
  - Duration: 0.75 seconds (75 samples per axis)
- **Features**:
  - Accelerometer: `acc_x`, `acc_y`, `acc_z`
  - Gyroscope: `gyr_x`, `gyr_y`, `gyr_z`

#### Preprocessing
- **Normalization**: RobustScaler for consistent scaling
- **Noise Reduction**: Low-pass filter
- **Augmentation**:
  - Gaussian noise
  - Rotation and translation transformations

---

### Neural Network Model

Here we use Keras API in the TensorFlow library to build the model for the training process to save time and maximize the proficiency.

The neural network includes:
- **Architecture**: A feedforward network with:
  - 1 inpur layer
  - 2 hidden layers
  - 1 output layer
- **Activation Functions**:
  - ReLU for hidden layers
  - Sigmoid for the output layer
- **Optimization Algorithm**: Adam
- **Training**:
  - Learning Rate: 0.01
  - Epochs: 50

Key Features:
- Input size: `(6, 1)` (representing accelerometer and gyroscope data on 3 axes)
- Output: Binary classification (fall/no fall)

---

## Implementation Details

### Hardware Components
- **Microcontroller**: ESP32-S3
- **Sensor**: MPU6050 (6-axis accelerometer and gyroscope)

### Software flow
1. **Data Acquisition**:
   - Configure and read data from MPU6050
2. **Data Preprocessing**:
   - Normalize and clean sensor data, data augmentation to extend the dataset
3. **Neural Network Processing with python**:
   - Training the model
4. **Extract the parameters**:
   - After training, the parameters will be extracted to an xlsx file, after that it will be defined in C
5. **Neural Network model in C**:
   - From the optimal parameters, build a feedforward network with exact the same structure as the python model but in C
6. **Alarm system**:
   - Using a buzzer and Wifi to alarm

---

## Results

The model achieved:
- **Accuracy**: 96.64%
- **Precision**: 99%
- **Recall**: 96%
- **F1 Score**: 0.98

Performance Metrics:
- Loss: 0.0621
- High precision and recall demonstrate robustness in fall detection.

---

## Future Improvements

1. **Data Collection**:
   - Increase dataset size, especially for similar activities like sitting/standing.
   - Collect data in diverse environments to improve generalization.

2. **Model Optimization**:
   - Explore sequential architectures like LSTMs for time-series data.
   - Fine-tune hyperparameters for better performance.

3. **Sensor Fusion**:
   - Combine MPU6050 data with additional sensors (e.g., magnetometers).

4. **Edge Deployment**:
   - Optimize the model for real-time processing on ESP32.

---

## Usage

### Prerequisites
- Install ESP-IDF development environment
- Ensure hardware (ESP32 and MPU6050) is connected
