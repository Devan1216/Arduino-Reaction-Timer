# Reaction Time Tester

## Overview
This project is an Arduino-based reaction time testing system that measures how quickly a user responds to a visual stimulus. An LED turns on after a random delay, and the user must press a button as fast as possible. The system records the reaction time and displays the result on a 16x2 LCD screen.

---

## Features
- Randomized delay before stimulus (prevents prediction)
- Accurate reaction timing using `millis()`
- Button input detection with debounce handling
- LCD display for real-time results
- Multiple rounds capability
- Exit/reset functionality

---

## Components Used
- Arduino Uno  
- 16x2 LCD Display (parallel)  
- Push button (reaction input)  
- Push button (exit/reset)  
- LED (stimulus indicator)  
- 220Ω resistor (for LED)  
- Breadboard + jumper wires  

---

## Wiring

### LED (Stimulus)
- Arduino Pin 8 → Resistor → LED (anode)  
- LED (cathode) → GND  

---

### Reaction Button
- One side → Pin 7  
- Other side → GND  
- Uses `INPUT_PULLUP`

---

### Exit Button
- One side → Pin 6  
- Other side → GND  
- Uses `INPUT_PULLUP`

---

### LCD (16x2)
- RS → 12  
- E → 11  
- D4 → 5  
- D5 → 4  
- D6 → 3  
- D7 → 2  
- VSS → GND  
- VDD → 5V  
- RW → GND  
- VO → GND (or potentiometer for contrast)

---

## How It Works
1. The system waits a random amount of time.
2. The LED turns on to signal the user.
3. The program starts timing using `millis()`.
4. When the button is pressed, the reaction time is calculated.
5. The result is displayed on the LCD screen.
6. The game resets for the next round.

---

## 🚀 Future Improvements
- Add high score tracking
- Include false-start detection
- Store results for analysis

---

## 🧑‍💻 Author
Created by Devan Doster
