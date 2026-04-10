  IoT-Based Blood Bank Monitoring System

An embedded system designed for real-time monitoring of blood storage conditions using Arduino and MQTT-based IoT communication. The system ensures safe storage by detecting temperature variations and triggering alerts.

  Features

-Real-time temperature monitoring  
-Automatic alert system (LED + buzzer)  
-IoT-based data transmission using MQTT  
-Web dashboard for remote monitoring  
-Hardware simulation using Tinkercad  

  Tech Stack

- Arduino (C/C++)
- Embedded Systems
- MQTT Protocol (HiveMQ)
- HTML + JavaScript (Web Dashboard)
- Tinkercad (Simulation)

   System Architecture

Temperature Sensor - Arduino - MQTT - Cloud Broker - Web Dashboard


  Hardware Components (Simulated)

- Arduino UNO  
- TMP36 Temperature Sensor  
- LEDs (Red & Green)  
- Buzzer  

  Simulation

The embedded system was simulated using Tinkercad to validate sensor readings and alert logic before real-world deployment.


  IoT Implementation

The system uses the MQTT protocol for real-time communication.

Data is published to: Bloodbank/temp website 
