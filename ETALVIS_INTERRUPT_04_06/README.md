# Problem 6: Switch Must Be Pressed 5 Times to Toggle LED Timings (All Interrupt-Based)

**Objective:**  
Use **Timer-1 & Timer-2 interrupts** for LED blinking and **PB0 external interrupt** for counting switch presses.  
Only when the switch is pressed **5 times**, invert the blinking intervals:

- **Default:**  
  - Red = 1 sec  
  - Green = 2 sec  

- **After 5 switch interrupts:**  
  - Red = 2 sec  
  - Green = 1 sec

**Files Included:**  
- `src/sketch.ino` → Timer-ISR LED logic + switch interrupt counter  
- `wokwi/diagram.json` → LED + switch wiring  
- `wokwi/wokwi-project.txt` → Interrupt configuration  

**Simulation Link :**  
[Open in Wokwi](https://wokwi.com/projects/PLACEHOLDER_INT_6)

**Steps to Run:**  
1. Load project into Wokwi.  
2. Press the switch 5 times.  
3. Watch timing swap after 5th press.

**Expected Output:**  
- Red & Green blink using **timer interrupts**.  
- PB0 switch triggers an **interrupt each press**.  
- After **5 interrupts**, timing toggles:  
  - Red → 2s  
  - Green → 1s  
- Everything is interrupt-driven.
