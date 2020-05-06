// Arduino keypad input support libirary for LCD keypad shield
// Based on sample sketch for DFROBOT Arduino LCD KeyPad Shield (SKU: DFR0009)
// at https://wiki.dfrobot.com/Arduino_LCD_KeyPad_Shield__SKU__DFR0009_


#ifndef simpleKeypad_h
#define simpleKeypad_h
#include <Arduino.h> 

// define some values used by the panel and buttons
#define btnRIGHT  0
#define btnUP     1
#define btnDOWN   2
#define btnLEFT   3
#define btnSELECT 4
#define btnNONE   5
#define btnVOID   6  //  Key pressed continuously but not elapsed _KEY_INTERVAL ms from previous key input

class simpleKeypad { 

public:

simpleKeypad(int interval, int repeatDelay, int readTimes);
simpleKeypad(int interval, int repeatDelay);
simpleKeypad(int interval);
simpleKeypad();

int read_buttons();
void repeatInterval(int interval);

private:

int _REPEAT_INTERVAL = 200;  // Repeat interval (ms) when a key is pressed continuously
int _REPEAT_DELAY = 500;     // Delay time (ms) for the first key repeat input
int _READ_TIMES = 200;       // Number of analog read for a key reading to avoid key chatter
};
#endif
