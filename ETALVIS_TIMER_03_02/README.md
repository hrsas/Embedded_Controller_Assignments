# Problem 2: Blink Red LED Every 1 Second Using Timer-1 and Green LED Every 2 Seconds Using Timer-2

**Objective:**  
Use **Timer-1** and **Timer-2** to independently control two LEDs on Port A:  
- **Red LED (Pin 0):** Blink every **1 second** using **Timer-1**.  
- **Green LED (Pin 1):** Blink every **2 seconds** using **Timer-2**.  
No interrupts are used.

**Files Included:**  
- `src/sketch.ino` → Code for dual timer-based LED blinking  
- `wokwi/diagram.json` → Circuit showing Red and Green LED connections  
- `wokwi/wokwi-project.txt` → Wokwi simulation metadata  

**Simulation Link :**  
[Open in Wokwi](https://wokwi.com/projects/PLACEHOLDER_LINK_2)

**Steps to Run:**  
1. Open the code in Wokwi.  
2. Verify wiring for Red (PA0) and Green (PA1) LEDs.  
3. Run simulation to observe independent timer operations.

**Expected Output:**  
- **Red LED (PA0):** Toggles every 1 second using **Timer-1**.  
- **Green LED (PA1):** Toggles every 2 seconds using **Timer-2**.  
- Both blink independently using separate software timers.
