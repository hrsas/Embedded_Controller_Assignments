# Problem 5: Blink Red (1s) and Green (2s) Using Timer Interrupts + Switch Interrupt Toggles Timing

**Objective:**  
Enhance Problem 4 by also using **interrupt for the switch** (PB0 external interrupt):  

- **Default:**  
  - Red = 1 sec  
  - Green = 2 sec  

- **On Switch Interrupt:**  
  - Red = 2 sec  
  - Green = 1 sec

**Files Included:**  
- `src/sketch.ino` → Timer-1, Timer-2 ISR + external interrupt (PB0)  
- `wokwi/diagram.json` → LED + switch interrupt wiring  
- `wokwi/wokwi-project.txt` → ISR configuration details  

**Simulation Link :**  
[Open in Wokwi](https://wokwi.com/projects/448961485617758209)

**Steps to Run:**  
1. Open simulation.  
2. Press the switch to generate PB0 interrupt.  
3. Observe timing changes.

**Expected Output:**  
- Red and Green LEDs blink using **timer interrupts only**.  
- Switch press triggers **external interrupt** → toggles timing.  
- System fully interrupt-driven.
