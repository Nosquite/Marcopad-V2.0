#define box_width 260
#define box_height 60

#define box_posx 50
#define box_posy 20

#define box_Ydistance 70
#define box_offset 2

int menuPosition = 0;

void pointer(){
  switch(menuPosition){
    case 0:
      tft.fillRect(0,0, 50, 240, TFT_WHITE);
      tft.drawRGBBitmap(15, 38, logo_pointer, 24, 24);
      break;
    case 1:
      tft.fillRect(0,0, 50, 240, TFT_WHITE);
      tft.drawRGBBitmap(15, 108, logo_pointer, 24, 24);
      break;
    case 2:
      tft.fillRect(0,0, 50, 240, TFT_WHITE);
      tft.drawRGBBitmap(15, 178, logo_pointer, 24, 24);
      break;
  }
}

void layoutMenu(){
  tft.fillScreen(TFT_WHITE);
  pointer();
  //first box 
  tft.fillRoundRect(box_posx, box_posy, box_width, box_height, 5, TFT_BLACK);
  tft.drawRoundRect(box_posx + 3, box_posy + 3, box_width - 3*box_offset, box_height - 3*box_offset, 5, TFT_WHITE);
  tft.drawRoundRect(box_posx + 2, box_posy + 2, box_width - 2*box_offset, box_height - 2*box_offset, 5, TFT_WHITE);
    //text
  tft.setCursor(110, 40);
  tft.setTextSize(3);
  tft.print("GENERAL");
  //second box
  tft.fillRoundRect(box_posx, box_posy + box_Ydistance , box_width, box_height, 5, TFT_BLACK);
  tft.drawRoundRect(box_posx + 3, box_posy + box_Ydistance + 3, box_width - 3*box_offset, box_height - 3*box_offset, 5, TFT_WHITE);
  tft.drawRoundRect(box_posx + 2, box_posy + box_Ydistance + 2, box_width - 2*box_offset, box_height - 2*box_offset, 5, TFT_WHITE);
    //text
  tft.setCursor(110, 110);
  tft.setTextSize(3);
  tft.print("FUSION");
  //third box
  tft.fillRoundRect(box_posx,     box_posy + 2*box_Ydistance,     box_width,                box_height, 5, TFT_BLACK);
  tft.drawRoundRect(box_posx + 3, box_posy + 2*box_Ydistance + 3, box_width - 3*box_offset, box_height - 3*box_offset, 5, TFT_WHITE);
  tft.drawRoundRect(box_posx + 2, box_posy + 2*box_Ydistance + 2, box_width - 2*box_offset, box_height - 2*box_offset, 5, TFT_WHITE);
    //text
  tft.setCursor(110, 180);
  tft.setTextSize(3);
  tft.print("BACK");
}

void infoMenu(){
  tft.fillScreen(TFT_WHITE);
  pointer();
  //first box 
  tft.fillRoundRect(box_posx, box_posy, box_width, box_height, 5, TFT_BLACK);
  tft.drawRoundRect(box_posx + 3, box_posy + 3, box_width - 3*box_offset, box_height - 3*box_offset, 5, TFT_WHITE);
  tft.drawRoundRect(box_posx + 2, box_posy + 2, box_width - 2*box_offset, box_height - 2*box_offset, 5, TFT_WHITE);
    //text
  tft.setCursor(110, 40);
  tft.setTextSize(3);
  tft.print("INFO");
  //second box
  tft.fillRoundRect(box_posx, box_posy + box_Ydistance , box_width, box_height, 5, TFT_BLACK);
  tft.drawRoundRect(box_posx + 3, box_posy + box_Ydistance + 3, box_width - 3*box_offset, box_height - 3*box_offset, 5, TFT_WHITE);
  tft.drawRoundRect(box_posx + 2, box_posy + box_Ydistance + 2, box_width - 2*box_offset, box_height - 2*box_offset, 5, TFT_WHITE);
    //text
  tft.setCursor(110, 110);
  tft.setTextSize(3);
  tft.print("");
  //third box
  tft.fillRoundRect(box_posx,     box_posy + 2*box_Ydistance,     box_width,                box_height, 5, TFT_BLACK);
  tft.drawRoundRect(box_posx + 3, box_posy + 2*box_Ydistance + 3, box_width - 3*box_offset, box_height - 3*box_offset, 5, TFT_WHITE);
  tft.drawRoundRect(box_posx + 2, box_posy + 2*box_Ydistance + 2, box_width - 2*box_offset, box_height - 2*box_offset, 5, TFT_WHITE);
    //text
  tft.setCursor(110, 180);
  tft.setTextSize(3);
  tft.print("BACK");
}

void menu(){
  tft.fillScreen(TFT_WHITE);
  pointer();
  //first box 
  tft.fillRoundRect(box_posx, box_posy, box_width, box_height, 5, TFT_BLACK);
  tft.drawRoundRect(box_posx + 3, box_posy + 3, box_width - 3*box_offset, box_height - 3*box_offset, 5, TFT_WHITE);
  tft.drawRoundRect(box_posx + 2, box_posy + 2, box_width - 2*box_offset, box_height - 2*box_offset, 5, TFT_WHITE);
    //text
  tft.setCursor(110, 40);
  tft.setTextSize(3);
  tft.print("LAYOUTS");
  //second box
  tft.fillRoundRect(box_posx, box_posy + box_Ydistance , box_width, box_height, 5, TFT_BLACK);
  tft.drawRoundRect(box_posx + 3, box_posy + box_Ydistance + 3, box_width - 3*box_offset, box_height - 3*box_offset, 5, TFT_WHITE);
  tft.drawRoundRect(box_posx + 2, box_posy + box_Ydistance + 2, box_width - 2*box_offset, box_height - 2*box_offset, 5, TFT_WHITE);
    //text
  tft.setCursor(110, 110);
  tft.setTextSize(3);
  tft.print("INFO");
  //third box
  tft.fillRoundRect(box_posx,     box_posy + 2*box_Ydistance,     box_width,                box_height, 5, TFT_BLACK);
  tft.drawRoundRect(box_posx + 3, box_posy + 2*box_Ydistance + 3, box_width - 3*box_offset, box_height - 3*box_offset, 5, TFT_WHITE);
  tft.drawRoundRect(box_posx + 2, box_posy + 2*box_Ydistance + 2, box_width - 2*box_offset, box_height - 2*box_offset, 5, TFT_WHITE);
    //text
  tft.setCursor(110, 180);
  tft.setTextSize(3);
  tft.print("BACK");
}

int linenumber = 5;

void shutdown(){
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(12, linenumber);
  tft.setTextSize(1);
  tft.setTextColor(TFT_GREEN);
  tft.println("root@marconoske:~$ sudo shutdown now -p");
  delay(500);
  linenumber = linenumber + 10;
  tft.setCursor(12, linenumber);
  tft.println("Broadcast message from root (tty1):");
  delay(100);
  linenumber = linenumber + 10;
  tft.setCursor(12, linenumber);
  tft.println("The system is going to shut down now!");
  delay(100);
  linenumber = linenumber + 10;
  tft.setCursor(12, linenumber);
  tft.println("INIT: Switching to runlevel: 6");
  delay(100);
  linenumber = linenumber + 10;
  tft.setCursor(12, linenumber);
  tft.println("INIT: Sending init processes the TERM signal");
  linenumber = linenumber + 10;
  tft.setCursor(12, linenumber);
  tft.println("INIT: Sending init processes the KILL signal");
  delay(100);
  linenumber = linenumber + 10;
  tft.setCursor(12, linenumber);
  tft.println("Stopping the RED interface...");
  linenumber = linenumber + 10;
  tft.setCursor(12, linenumber);
  tft.println("Shutting down...");
  delay(100);
  linenumber = linenumber + 10;
  tft.setCursor(12, linenumber);
  tft.println("Saving the clock");
  delay(100);
  linenumber = linenumber + 10;
  tft.setCursor(12, linenumber);
  tft.println("Sending all processes the TERM signal");
  linenumber = linenumber + 10;
  tft.setCursor(12, linenumber);
  tft.println("Sending all processes the KILL signal");
  delay(100);
  linenumber = linenumber + 10;
  tft.setCursor(12, linenumber);
  tft.println("Turning off swap");
  delay(100);
  linenumber = linenumber + 10;
  tft.setCursor(12, linenumber);
  tft.println("Unmounting others");
  linenumber = linenumber + 10;
  tft.setCursor(12, linenumber);
  tft.println("Unmounting root");
  delay(100);
}


void displayLayout1(){
  tft.fillScreen(TFT_WHITE);

  tft.drawRGBBitmap(10, 11, logo_meme, 76, 220);

  tft.drawRGBBitmap(96, 16, logo_menu, icon_width, icon_height);
  tft.drawRGBBitmap(152, 16, logo_unmute, icon_width, icon_height);
  tft.drawRGBBitmap(208, 16, logo_play_skip_back_circle_icon, icon_width, icon_height);
  tft.drawRGBBitmap(264, 16, logo_skip_forward_circle_fill_icon, icon_width, icon_height);
  tft.drawRGBBitmap(96,  72, logo_file_explorer, icon_width, icon_height);
  tft.drawRGBBitmap(152, 72, logo_cura, icon_width, icon_height);
  tft.drawRGBBitmap(208,  72, logo_fusion, icon_width, icon_height);
  tft.drawRGBBitmap(264, 72, logo_arduino, icon_width, icon_height);
  tft.drawRGBBitmap(96, 128, logo_calculator, icon_width, icon_height);
  tft.drawRGBBitmap(152, 128, logo_steam, icon_width, icon_height);
  tft.drawRGBBitmap(208, 128, logo_battlenet, icon_width, icon_height);
  tft.drawRGBBitmap(264, 128, logo_vscode, icon_width, icon_height);
  tft.drawRGBBitmap(96, 184, logo_power_off, icon_width, icon_height);
  tft.drawRGBBitmap(152, 184, logo_epic_games, icon_width, icon_height);
  tft.drawRGBBitmap(208, 184, logo_league, icon_width, icon_height);
  tft.drawRGBBitmap(264, 184, logo_signal, icon_width, icon_height);
}

void displayLayout2(){
  tft.fillScreen(TFT_WHITE);

  tft.drawRGBBitmap(10, 11, logo_meme, 76, 220);

  tft.drawRGBBitmap(96, 16, logo_menu, icon_width, icon_height);
  tft.drawRGBBitmap(152, 16, logo_unmute, icon_width, icon_height);
  tft.drawRGBBitmap(208, 16, logo_play_skip_back_circle_icon, icon_width, icon_height);
  tft.drawRGBBitmap(264, 16, logo_skip_forward_circle_fill_icon, icon_width, icon_height);
}