#include <LiquidCrystal_I2C.h>
#include <Keypad.h>



const byte ROWS = 4; 
const byte COLS = 4; 


char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};
//these are the digital pins where the keypad needs to be plugged into 9 is the left most pin 2 is the right most pin
byte rowPins[ROWS] = {9, 8, 7, 6}; 
byte colPins[COLS] = {5, 4, 3, 2}; 


//this just maps the keys to the characters
Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 




LiquidCrystal_I2C lcd(0x27, 16, 2); // I2C address 0x27, 16 column and 2 rows

void setup()
{
  lcd.init(); // initialize the lcd
  lcd.backlight();
}

void loop()
{
  lcd.clear();                 // clear display
  lcd.setCursor(0, 0);         // move cursor to   (0, 0)
          // print message at (0, 0)
  lcd.setCursor(2, 1);  
  
  char customKey = customKeypad.getKey();
  if (customKey){
    lcd.print(customKey);
  }       
  
  

  
}
