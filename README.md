# ESP32 LED Patterns

This repository contains my first ESP32 project, where I experimented with different LED blinking patterns using the Arduino IDE. I created these programs to understand the basics of GPIO pins, digital outputs, and how timing affects LED behavior.

## What I used

* ESP32 Development Board
* LED
* 220Ω Resistor
* Breadboard
* Jumper Wires
* Arduino IDE

## LED Patterns

This repository includes five simple LED programs:

* Basic LED Blink
* Custom Blink
* SOS Blink
* heart beat Blink
* Binary count Pattern

Each program helped me get more comfortable with writing code for the ESP32 and understanding how LEDs can be controlled through GPIO pins.

## Circuit Connection

* GPIO 5 → 220Ω Resistor → LED (+)
* GND → LED (-)

## What I learned

Through this project, I learned how to:

* Configure GPIO pins as outputs using `pinMode()`
* Turn an LED ON and OFF using `digitalWrite()`
* Use `delay()` to create different blinking patterns
* Upload programs to an ESP32 using the Arduino IDE
* Build a simple breadboard circuit and troubleshoot basic wiring issues

## Project Structure

```text
esp32-led-patterns/
├── basic blinking
├── blinking at different speed 
├── SOS 
├── heart beat
├── binary count(<5)
├── images/
└── README.md
```

## Images

I'll be adding photos of the hardware setup and the LED patterns.

## Next Steps

This is the first project in my ESP32 learning journey. Next, I plan to work on projects involving push buttons, multiple LEDs, PWM, sensors, and Wi-Fi.

Thanks for checking out my project!
