# Problem 3: Blink Red LED (1s), Green LED (2s), and Blue LED (4s) Using Timers 1, 2, and 3

**Objective:**  
Implement three independent timer-based blink operations on Port A:  
- **Red LED (Pin 0):** Blink every **1 second** using **Timer-1**.  
- **Green LED (Pin 1):** Blink every **2 seconds** using **Timer-2**.  
- **Blue LED (Pin 2):** Blink every **4 seconds** using **Timer-3**.  
No interrupts are to be used.

**Files Included:**  
- `src/sketch.ino` → Code implementing three-timer LED control  
- `wokwi/diagram.json` → Circuit showing Red, Green, and Blue LEDs  
- `wokwi/wokwi-project.txt` → Simulation configuration  

**Simulation Link :**  
[Open in Wokwi](https://wokwi.com/projects/PLACEHOLDER_LINK_3)

**Steps to Run:**  
1. Open `sketch.ino` in Wokwi.  
2. Check LED connections on Port A pins 0, 1, and 2.  
3. Run simulation to observe independent blinking.

**Expected Output:**  
- **Red LED (PA0):** Toggles every 1s.  
- **Green LED (PA1):** Toggles every 2s.  
- **Blue LED (PA2):** Toggles every 4s.  
- All operate independently using **Timer-1, Timer-2, and Timer-3**.  
- **No interrupts** used; delays are timer-based.
