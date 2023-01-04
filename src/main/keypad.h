#include "display.h"

const byte ROWS = 4; // rows
const byte COLS = 4; // columns
//define the symbols on the buttons of the keypads
char keys[ROWS][COLS] = {
  {'m','k','z','e'},
  {'c','1','4','7'},
  {'n','2','5','8'},
  {'b','3','6','9'}
};
byte rowPins[ROWS] = {20, 10, 21, 8}; //connect to the row pinouts of the keypad
byte colPins[COLS] = {16, 17, 18, 19}; //connect to the column pinouts of the keypad

//initialize an instance of class NewKeypad
Adafruit_Keypad customKeypad = Adafruit_Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS);

char pressed_key;

bool mute = false;
bool menu_bool = false;

int layout = 1;

void autohotkey(char letter){
  Keyboard.press(KEY_LEFT_CTRL);
  delay(50);
  Keyboard.press(KEY_LEFT_ALT);
  delay(50);
  Keyboard.press(letter);
  delay(200);
  Keyboard.releaseAll();
  delay(50);
}

void Layout1(char key){
  switch(key){
    case '1':
      Keyboard.press(KEY_F18);   //cura
      delay(30);
      Keyboard.releaseAll();
      delay(30); 
      break;
    case '2':
      Keyboard.press(KEY_F19);   //fusion360
      delay(30);
      Keyboard.releaseAll();
      delay(30); 
      break;
    case '3':
      Keyboard.press(KEY_F20);   //arduino IDE
      delay(30);
      Keyboard.releaseAll();
      delay(30); 
      break;
    case '4':
      autohotkey('g');   //steam
      break;
    case '5':
      autohotkey('l');   //battlenet
      break;
    case '6':
      Keyboard.press(KEY_F23);   //vscode
      delay(30);
      Keyboard.releaseAll();
      delay(30);  
      break;
    case '7':
      autohotkey('h');   //epic games
      break;
    case '8':
      autohotkey('c');   //league
      break;
    case '9':
      autohotkey('a');   //signal
      break;
    case 'm':
      menu_bool = !menu_bool;
      if(menu_bool == true){
        menuPosition = 0;
        menu();
      } else if(menu_bool == false) {
        displayLayout1();
      }
      break;
    case 'k':
      Keyboard.press(KEY_F22);  //file explorer
      delay(30);
      Keyboard.releaseAll();
      delay(30); 
      break;
    case 'z':
      Keyboard.press(KEY_F21);   //calculator
      delay(30);
      Keyboard.releaseAll();
      delay(30); 
      break;
    case 'e':
      shutdown();
      Keyboard.press(KEY_F24);  //shutdown
      delay(30);
      Keyboard.releaseAll();
      delay(30);  
      break;   
    case 'c':
      mute = !mute;
      if(mute == true){
        tft.drawRGBBitmap(152, 16, logo_mute, icon_width, icon_height);
      } else if(mute == false) {
        tft.drawRGBBitmap(152, 16, logo_unmute, icon_width, icon_height);
      }
      tft.write(mute);
      autohotkey('u');   //mute/unmute
      break; 
    case 'n':
      Keyboard.press(KEY_F17);
      delay(30);
      Keyboard.releaseAll();
      delay(30); 
      break;
    case 'b':
      Keyboard.press(KEY_F16);
      delay(30);
      Keyboard.releaseAll();
      delay(30);  
      break;                       
  }
}

void Layout2(char key){
  switch(key){
    case '1':
      break;
    case '2':
      break;
    case '3':
      break;
    case '4':
      break;
    case '5':
      break;
    case '6':
      break;
    case '7':
      break;
    case '8':
      break;
    case '9':
      break;
    case 'm':
      menu_bool = !menu_bool;
      if(menu_bool == true){
        menuPosition = 0;
        menu();
      } else if(menu_bool == false) {
        displayLayout2();
      }
      break;
    case 'k':
      break;
    case 'z':
      break;
    case 'e': 
      break;   
    case 'c':
      mute = !mute;
      if(mute == true){
        tft.drawRGBBitmap(152, 16, logo_mute, icon_width, icon_height);
      } else if(mute == false) {
        tft.drawRGBBitmap(152, 16, logo_unmute, icon_width, icon_height);
      }
      tft.write(mute);
      autohotkey('u');   //mute/unmute
      break; 
    case 'n':
      Keyboard.press(KEY_F17);
      delay(30);
      Keyboard.releaseAll();
      delay(30); 
      break;
    case 'b':
      Keyboard.press(KEY_F16);
      delay(30);
      Keyboard.releaseAll();
      delay(30);  
      break;                       
  }
}

void keypad(){
  customKeypad.tick();

  while(customKeypad.available()){
    keypadEvent e = customKeypad.read();
    if(e.bit.EVENT == KEY_JUST_PRESSED){
      pressed_key = (char)e.bit.KEY;
      if(menu_bool == false){
        switch(layout){
          case 1:
            Layout1(pressed_key);
            break;
          case 2:
            Layout2(pressed_key);
        }
          
      } else{
        if(pressed_key == 'm'){
          switch(layout){
            case 1:
              Layout1(pressed_key);
              break;
            case 2:
              Layout2(pressed_key);
              break;
          }
        }
      }
      //tft.write(pressed_key);
    }
  }
}