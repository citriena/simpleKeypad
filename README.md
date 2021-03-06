# simpleKeypad

https://github.com/citriena/simpleKeypad  
(c) citriena (citriena@yahoo.co.jp)


## Introduction
Arduino key input support library for DFROBOT Arduino LCD keypad shield (SKU: DFR0009) or its compatibles.

## Features
simpleKeypad library can
 * avoid key debouncing.
 * set key repeat rate.
 * set wait time before a pressed button begins repeating.

## Usage
### Constructor
````
simpleKeypad(int16_t interval, int16_t repeatDelay, int16_t readTimes);
````
* interval（optional; default value: 200ms）
  * key input repeat interval (ms) when pressed continuously
* repeatDelay（optional; default value: 500ms）
  * wait time (ms) to start key input repeating if larger than key input repeat interval
* readTimes（optional; default value: 200）
  * read times of analogRead() for a key reading
  * use minimum value of the readings to avoid key debounce problem

### Functions
````
btnCODE_t read_buttons();
````
returns key code listed below
 * None   - btnNONE   ( 0)
 * Select - btnSELECT ( 1)
 * Right  - btnRIGHT  ( 2)
 * Down   - btnDOWN   ( 4)
 * Up     - btnUP     ( 8)
 * Left   - btnLEFT   (16)
 * Void   - btnVOID   (32)

Void means key pressed but **Void** because of key repeat rate limit.

````
void repeatInterval(int16_t interval);
````
set key repeat interval (ms)

### Sample sketch
See sample sketch for basic usage.

## Releases

### 1.0.0 - Mar. 04, 2019

### 1.0.1 - June 09, 2020
* modified initializing method of variables in the constructor
* modified keycode data type from int to enum (btnCODE_t)

### 1.1.0 - Mar. 05, 2021
* key code changed.
