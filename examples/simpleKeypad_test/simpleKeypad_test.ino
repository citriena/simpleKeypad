#include <LiquidCrystal.h>
#include <simpleKeypad.h>    // original library for keypad input

/*******************************************************
test sketch of simpleKeypad library for Arduino LCD keypad shield
based on DFROBOT ARduino LCD Keypad Shield (SKU_DFR0009) sample sketch 
by Mark Bramwell, July 2010.
https://wiki.dfrobot.com/Arduino_LCD_KeyPad_Shield__SKU__DFR0009_

RIGHT: increase key interval (ms)
LEFT: decrease key interval (ms)
UP: increase counter
DOWN: decrease counter
********************************************************/

// select the pins used on the LCD panel
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);


int keyInterval = 200;

simpleKeypad keypad(keyInterval, 200);



void setup() {
  lcd.begin(16, 2);              // start the library
  lcd.setCursor(0,0);
  lcd.print("key  count   int");
  lcd.setCursor(9,1);
  lcd.print("0");
  lcd.setCursor(13,1);
  lcd.print(keyInterval);
}


void loop() {
  static int keyCount = 0;
  int lcd_key = 0;

  lcd.setCursor(0,1);              // move to the begining of the second line
  lcd_key = keypad.read_buttons(); // read the buttons

  switch (lcd_key) {               // depending on which button was pushed, we perform an action
    case btnRIGHT:
    {
      lcd.print("RIGHT ");
      keyInterval += 50;
      if (keyInterval > 1000) keyInterval = 1000; 
      keypad.keyInterval(keyInterval);
      break;
    }
    case btnLEFT:
    {
      lcd.print("LEFT   ");
      keyInterval -= 50;
      if (keyInterval < 0) keyInterval = 0; 
      keypad.keyInterval(keyInterval);
      break;
    }
    case btnUP:
    {
      lcd.print("UP    ");
      keyCount++;
      break;
    }
    case btnDOWN:
    {
      lcd.print("DOWN  ");
      keyCount--;
      if (keyCount < 0) keyCount = 0;
      break;
    }
    case btnSELECT:
    {
      lcd.print("SELECT");
      break;
    }
    case btnNONE:
    {
      lcd.print("NONE  ");
      break;
    }
    case btnVOID:
    {
      break;
    }
  }
  if (lcd_key != btnNONE) {
    lcd.setCursor(7,1);
    if (keyCount < 100) lcd.print(" ");
    if (keyCount <  10) lcd.print(" ");
    lcd.print(keyCount);
    lcd.setCursor(12,1);
    if (keyInterval < 1000) lcd.print(" ");
    if (keyInterval <  100) lcd.print(" ");
    if (keyInterval <   10) lcd.print(" ");
    lcd.print(keyInterval);
  }
}
