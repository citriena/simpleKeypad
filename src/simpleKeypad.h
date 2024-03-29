// Arduino keypad input support libirary for LCD keypad shield V1.2.0
// Based on sample sketch for DFROBOT Arduino LCD KeyPad Shield (SKU: DFR0009)
// at https://wiki.dfrobot.com/Arduino_LCD_KeyPad_Shield__SKU__DFR0009_

#ifndef simpleKeypad_h
#define simpleKeypad_h
#include <Arduino.h> 

// define some values used by the panel and buttons
typedef enum {
  btnNONE   =  0,
  btnSELECT =  1,
  btnRIGHT  =  2,
  btnDOWN   =  4,
  btnUP     =  8,
  btnLEFT   = 16,
  btnVOID   = 32  //  Key pressed continuously but not elapsed _KEY_INTERVAL ms from previous key input
} btnCODE_t;

class simpleKeypad { 

public:

simpleKeypad(int16_t interval, int16_t repeatDelay, int16_t readTimes, bool quickBtnChk);
simpleKeypad(int16_t interval, int16_t repeatDelay, int16_t readTimes);
simpleKeypad(int16_t interval, int16_t repeatDelay);
simpleKeypad(int16_t interval);
simpleKeypad();

btnCODE_t read_buttons();
void repeatInterval(int16_t interval);

private:
int16_t _REPEAT_INTERVAL = 200;  // Repeat interval (ms) when a key is pressed continuously
int16_t _REPEAT_DELAY = 500;     // Delay time (ms) for the first key repeat input
int16_t _READ_TIMES = 200;       // Number of analog read for a key reading to avoid key chatter
bool _QUICK_BTN_NONE_CHK = false;// Simplified btnNONE check for speed up
};
#endif
