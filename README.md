# Arduino LED Blink & Simple Calculator

This Arduino project demonstrates two basic functionalities:

1. **LED Blinking** – The onboard LED blinks at a fixed interval.
2. **Simple Serial Calculator** – The program takes user input via the Serial Monitor to perform addition or multiplication.

---

## 🔧 Features

* Continuously blinks the built-in LED (`LED_BUILTIN`).
* Accepts user input from the Serial Monitor.
* If you enter:

  * `1` → prompts you to enter **two numbers**, then prints their **sum**.
  * `2` → prompts you to enter **two numbers**, then prints their **product**.

---

## 🧰 Requirements

* Arduino board (e.g., Uno, Nano, Mega)
* Arduino IDE installed
* USB cable for programming and serial communication

---

## ⚙️ How It Works

1. Upload the code to your Arduino.
2. Open the **Serial Monitor** (`Ctrl + Shift + M`) in the Arduino IDE.
3. Set the **baud rate** to `9600`.
4. Follow the on-screen prompts:

   * Enter `1` for addition.
   * Enter `2` for multiplication.
   * Then enter two numbers when asked.