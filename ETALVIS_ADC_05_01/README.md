# Problem 1: Read Temperature Sensor via ADC and Display Value on 7-Segment Display

**Objective:**  
Connect a **temperature sensor** to an **ADC input**, read the analog temperature value, convert it to digital form, and display the temperature on a **7-segment display**.

**Files Included:**  
- `src/sketch.ino` → Code to read ADC value and drive the 7-segment  
- `wokwi/diagram.json` → ADC sensor + 7-segment wiring diagram  
- `wokwi/wokwi-project.txt` → Wokwi project metadata / configuration  

**Simulation Link :**  
[Open in Wokwi](https://wokwi.com/projects/449070043955293185)

**Steps to Run:**  
1. Open `sketch.ino` in Wokwi.  
2. Load the wiring from `diagram.json`.  
3. Run the simulation.  
4. Adjust the temperature sensor to observe changes on 7-segment.

**Expected Output:**  
- The ADC reads the temperature sensor value accurately.  
- The converted temperature (°C) appears on the **7-segment display**.  
- Display updates live whenever the sensor value changes.
