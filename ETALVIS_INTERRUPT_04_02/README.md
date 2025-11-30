# Problem 2: Blink Red LED (1s, Timer-1) and Green LED (2s, Timer-2) Using Interrupts

**Objective:**  
Use **two separate timers with interrupts**:  
- **Timer-1 ISR** → Blink **Red LED** (PA0) every **1 sec**  
- **Timer-2 ISR** → Blink **Green LED** (PA1) every **2 sec**

**Files Included:**  
- `src/sketch.ino` → Code for dual-timer ISR blinking  
- `wokwi/diagram.json` → LED connections on Port A  
- `wokwi/wokwi-project.txt` → Project metadata  

**Simulation Link :**  
[Open in Wokwi](https://wokwi.com/projects/PLACEHOLDER_INT_2)

**Steps to Run:**  
1. Upload `sketch.ino` to Wokwi.  
2. Check Red (PA0) and Green (PA1) LEDs.  
3. Run simulation.

**Expected Output:**  
- Red LED toggles every **1 second**.  
- Green LED toggles every **2 seconds**.  
- Both actions happen inside **Timer-1 and Timer-2 interrupts**, independently.
