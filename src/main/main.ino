#include <Keyboard.h>           //keyboard input library
#include "Adafruit_Keypad.h"    //libaries for switch matrix

//libraries for display
#include <SPI.h>
#include <TFT_eSPI.h>        // Hardware-specific library
TFT_eSPI tft = TFT_eSPI();   // Invoke custom library

//header files 
#include "bitmap.h"
#include "pins.h"
#include "keypad.h"
#include "encoder.h"


//first core
void setup() { 
  Serial.begin (9600);
  Keyboard.begin(KeyboardLayout_de_DE);

  //first rotary encoder setup
  pinMode(ENC1_CLK,INPUT);
  pinMode(ENC1_DT,INPUT);
  pinMode(ENC1_SW,INPUT_PULLUP);

  //second rotary encoder setup
  pinMode(ENC2_CLK,INPUT);
  pinMode(ENC2_DT,INPUT);
  pinMode(ENC2_SW,INPUT_PULLUP);

  //initialising values of encoders
  lastState = digitalRead(ENC1_CLK);
  lastState2 = digitalRead(ENC2_CLK); 

}

void loop() { 
  rotaryEncoder();
}

//second core
void setup1(){
  customKeypad.begin();

  //display setup
  tft.init();
  tft.setRotation(1);

  displayLayout1();
}

void loop1(){
  keypad();
}