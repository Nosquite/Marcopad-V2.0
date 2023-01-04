int16_t lastValue, value;
int16_t lastValue2, value2;

bool lastState, state;
bool lastState2, state2;

unsigned long prevSWTime;
unsigned long currentSWTime;

unsigned long prevSW2Time;
unsigned long currentSW2Time;

bool layoutMenu_bool = false; 

bool infoMenu_bool = false;

void rotaryEncoder(){
    delay(5);

    state = digitalRead(ENC1_CLK);  
    state2 = digitalRead(ENC2_CLK);  

    if ((lastState == LOW) && (state == HIGH)) {
        if(digitalRead(ENC1_DT) == HIGH){
        value++;
        }  
    else {     
        value--;
        }       
    }

    if ((lastState2 == LOW) && (state2 == HIGH)) {
        if(digitalRead(ENC2_DT) == HIGH){
        value2++;
        }  
    else {     
        value2--;
        }       
    }

    //actions for first encoder --> richt one
    if(value > lastValue){
      for(int i = 0; i < 2;i++){
          Keyboard.press(KEY_F14);
          delay(30);
          Keyboard.releaseAll();
          delay(30);  
          //tft.write('u');  
      }

    } if(value < lastValue) {
      for(int i = 0; i < 2;i++){
          Keyboard.press(KEY_F15);
          delay(30);
          Keyboard.releaseAll();
          delay(30);  
          //tft.write('o');  
      } 
    }  

    //actions for second encoder --> left one
    if(value2 < lastValue2){
        if(menu_bool == true){
            if(menuPosition == 2)
                menuPosition = 0;
            else
                menuPosition++;
            pointer(); 
        }    
    }

    if(value2 > lastValue2) {
        if(menu_bool == true){
            if(menuPosition == 0)
                menuPosition = 2;
            else
                menuPosition--;
            pointer(); 
        } 
    }

    //first encoder switch
    if (digitalRead(ENC1_SW) == LOW) {
        currentSWTime = millis();
        if(currentSWTime - prevSWTime > 300){
            Keyboard.press(KEY_F13);
            delay(100);
            Keyboard.releaseAll();
            delay(100);     
        }
        prevSWTime = currentSWTime;
    }

    //second encoder switch
    if (digitalRead(ENC2_SW) == LOW) {
        currentSW2Time = millis();
        if(currentSW2Time - prevSW2Time > 300){
            if(menu_bool && !layoutMenu_bool && !infoMenu_bool){   //main menu 
                switch (menuPosition){
                case 0:
                    menuPosition = 0;
                    layoutMenu_bool = true;
                    layoutMenu();
                    break;
                case 1:
                    menuPosition = 0;
                    infoMenu_bool = true;
                    infoMenu();
                    break;
                case 2:
                    menu_bool = false;
                    switch(layout){
                        case 1:
                            displayLayout1();
                            break;
                        case 2:
                            displayLayout2();
                            break;
                    }
                    break;
                }
            } else if(menu_bool && layoutMenu_bool){
                switch(menuPosition){
                    case 0:
                        displayLayout1();
                        menu_bool = false;
                        layoutMenu_bool = false;
                        layout = 1;
                        break;  
                    case 1:
                        displayLayout2();
                        menu_bool = false;
                        layoutMenu_bool = false;
                        layout = 2;
                        break;
                    case 2:
                        menuPosition = 0;
                        layoutMenu_bool = false;
                        menu();
                        break;
                } 
            } else if(menu_bool && infoMenu_bool){
                switch(menuPosition){
                    case 0:
                        break;  
                    case 1:
                        break;
                    case 2:
                        menuPosition = 0;
                        infoMenu_bool = false;
                        menu();
                        break;
                } 
            }
        }
        prevSW2Time = currentSW2Time;
    }
    lastValue = value;
    lastState = state;  

    lastValue2 = value2;
    lastState2 = state2;
}