# Problem 4: Blink Red (1s) and Green (2s) Using Timer Interrupts + Switch Toggles Timing

**Objective:**  
Use **Timer-1 and Timer-2 interrupts** for blinking LEDs, and a **switch on PB0 (polled, NOT interrupt-based)** to toggle LED timings:  

- **Default Mode:**  
  - Red → **1 sec** (Timer-1 ISR)  
  - Green → **2 sec** (Timer-2 ISR)  

- **After Switch Press:**  
  - Red → **2 sec**  
  - Green → **1 sec**

**Files Included:**  
- `src/sketch.ino` → Timer-ISR LED control + switch polling logic  
- `wokwi/diagram.json` → LED + switch wiring  
- `wokwi/wokwi-project.txt` → Simulation reference  

**Simulation Link :**  
[Open in Wokwi](https://wokwi.com/projects/448957937091447809)

**Steps to Run:**  
1. Load project in Wokwi.  
2. Press the switch on Port B pin 0.  
3. Watch the LED timing toggle.

**Expected Output:**  
- Default: Red 1s, Green 2s.  
- After switch: Red 2s, Green 1s.  
- Timings handled by **interrupts**, switching handled by **polling**.
