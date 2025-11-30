# Problem 4: Blink Red and Green LEDs Using Timer-1 and Timer-2 with Switch-Controlled Timing Toggle

**Objective:**  
Use **Timer-1** and **Timer-2** to blink two LEDs on Port A, and a **switch on Pin 0 of Port B** to toggle their blinking intervals:  
- **Default Mode:**  
  - Red LED (PA0) → 1-second blink using Timer-1  
  - Green LED (PA1) → 2-second blink using Timer-2  
- **When Switch Pressed (PB0):**  
  - Red LED (PA0) → 2-second blink using Timer-1  
  - Green LED (PA1) → 1-second blink using Timer-2  
No interrupts are to be used.

**Files Included:**  
- `src/sketch.ino` → Code implementing switch-controlled timing logic  
- `wokwi/diagram.json` → Wokwi circuit diagram (Port A LEDs, Port B switch)  
- `wokwi/wokwi-project.txt` → Simulation project details  

**Simulation Link :**  
[Open in Wokwi](https://wokwi.com/projects/448963189283448833)

**Steps to Run:**  
1. Open `sketch.ino` in Wokwi.  
2. Verify LED connections: Red (PA0), Green (PA1), Switch (PB0).  
3. Run the simulation.  
4. Press the switch to toggle LED blink intervals.

**Expected Output:**  
- **Initially:**  
  - Red LED blinks every 1 second.  
  - Green LED blinks every 2 seconds.  
- **After Switch Press:**  
  - Red LED blinks every 2 seconds.  
  - Green LED blinks every 1 second.  
- Switch toggles timing modes dynamically.  
- Entire logic works **without interrupts**, purely timer-based.
