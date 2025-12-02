# Problem 2: Read Temperature Sensor via ADC and Control Relay + LED Based on Threshold

**Objective:**  
Connect a **temperature sensor** to the ADC, read the temperature value, and use it to control a **relay with an LED indicator** as follows:  
- Turn **ON** the LED + relay if **temperature > 38°C**  
- Turn **OFF** the LED + relay if **temperature < 36°C**

**Files Included:**  
- `src/sketch.ino` → ADC read + relay control logic  
- `wokwi/diagram.json` → Relay, LED, and sensor wiring diagram  
- `wokwi/wokwi-project.txt` → Wokwi simulation details  

**Simulation Link :**  
[Open in Wokwi](https://wokwi.com/projects/449259494772175873)

**Steps to Run:**  
1. Open the sketch in Wokwi.  
2. Load the circuit diagram.  
3. Run simulation.  
4. Adjust sensor temperature to trigger relay and LED.

**Expected Output:**  
- When temperature exceeds **38°C**, relay activates and LED turns **ON**.  
- When temperature drops below **36°C**, relay deactivates and LED turns **OFF**.  
- System responds immediately to ADC sensor changes.
