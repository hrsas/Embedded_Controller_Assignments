# Problem 1: Blink Red LED Every 1 Second Using Timer-1 (With Interrupts)

**Objective:**  
Use **Timer-1 interrupt** to blink the **Red LED** (Pin 0 of Port A) every **1 second**.  
LED toggling must occur **inside the Timer-1 ISR**.

**Files Included:**  
- `src/sketch.ino` → Timer-1 interrupt code for 1s blink  
- `wokwi/diagram.json` → LED + timer circuit wiring  
- `wokwi/wokwi-project.txt` → Simulation info  

**Simulation Link :**  
[Open in Wokwi](https://wokwi.com/projects/PLACEHOLDER_INT_1)

**Steps to Run:**  
1. Open the sketch in Wokwi.  
2. Load the circuit diagram.  
3. Run the simulation.  

**Expected Output:**  
- **Red LED toggles every 1 second** using Timer-1 ISR.  
- Blinking is fully interrupt-driven.  
- No delay loops are used.
