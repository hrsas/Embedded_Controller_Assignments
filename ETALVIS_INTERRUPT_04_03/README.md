# Problem 3: Blink Red (1s), Green (2s), and Blue (4s) Using Timer-1, Timer-2, Timer-3 Interrupts

**Objective:**  
Use **three timer interrupts**, each controlling one LED:  
- **Timer-1 ISR:** Red LED (PA0) → **1 sec**  
- **Timer-2 ISR:** Green LED (PA1) → **2 sec**  
- **Timer-3 ISR:** Blue LED (PA2) → **4 sec**

**Files Included:**  
- `src/sketch.ino` → Complete 3-timer ISR LED blinking logic  
- `wokwi/diagram.json` → Port-A LED wiring  
- `wokwi/wokwi-project.txt` → Simulation information  

**Simulation Link :**  
[Open in Wokwi](https://wokwi.com/projects/PLACEHOLDER_INT_3)

**Steps to Run:**  
1. Open the Wokwi project.  
2. Run the code.  
3. Observe independent ISR-driven blinking.

**Expected Output:**  
- Red toggles every **1s**.  
- Green toggles every **2s**.  
- Blue toggles every **4s**.  
- All work **independently**, using their own timer interrupts.
