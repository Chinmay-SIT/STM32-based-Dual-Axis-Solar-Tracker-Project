# STM32-based-Dual-Axis-Solar-Tracker-Project
## ABSTRACT

This project presents the design and implementation of a dual-axis solar tracker to optimize solar energy collection. Unlike fixed solar panels, the dual-axis system adjusts both the vertical and horizontal angles of the panel to ensure it remains perpendicular to the sun’s rays throughout the day, maximizing energy efficiency. The system employs light-dependent resistors (LDRs) as sensors to detect the sun's position and an STM32 microcontroller to process data and control servo motors for real-time adjustments. The tracker is designed to enhance energy capture, improve overall system efficiency, and demonstrate a cost-effective solution for renewable energy applications. Potential uses include residential solar systems, off-grid energy projects, and educational models for sustainable energy practices.

## INTRODUCTION

Renewable energy is vital in addressing rising energy demands, reducing greenhouse gas emissions, and mitigating climate change. Among the various renewable sources, solar power is abundant and highly sustainable. However, traditional fixed solar panels are limited in efficiency due to their static orientation.

To overcome this limitation, a dual-axis solar tracking system provides a promising solution. Unlike fixed systems, this tracker dynamically adjusts both horizontal and vertical angles to follow the sun's movement, significantly improving efficiency. This project employs an STM32 microcontroller for enhanced performance, precise control, and energy efficiency.

## OBJECTIVE

The primary objective of this project is to design and implement a cost-effective and efficient dual-axis solar tracking system using an STM32 microcontroller. Specific objectives include:

- Maximize Solar Energy Harvesting.

- Develop a Scalable and Modular Design.

- Utilize Affordable and Readily Available Components.

- Improve System Reliability.

- Promote Sustainable Energy Solutions.

## METHODOLOGY

### 1.Design and Assembly:

Build a stable base structure for mounting motors and solar panels.

Position four LDRs at strategic points to capture sunlight from multiple directions.

### 2.Circuit Design:

Connect the STM32 microcontroller to LDRs, motors, and a stable power supply.

Use resistors to calibrate the LDRs and ensure signal accuracy.

### 3.Programming:

Develop code in STM32CubeIDE using HAL libraries for motor control and sensor readings.

Implement logic for motor control based on light intensity comparisons.

### 4.Testing and Evaluation:

Conduct indoor tests for calibration and motor control.

Perform outdoor tests to evaluate system response to changing sunlight conditions.

## RESULTS

The STM32-based dual-axis solar tracker achieved:

- 20-30% improvement in energy capture compared to fixed solar panels.

- Reliable performance under varying weather conditions.

- Quick response time with precise motor control.

![image](https://github.com/user-attachments/assets/ee69bae3-40db-4519-aaf8-a82fc2e8ead4)

