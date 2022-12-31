
#include "DigiKeyboard.h"
void setup() {
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(100);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);
  DigiKeyboard.print("Add-Type -AssemblyName System.speech");
  DigiKeyboard.delay(1000); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$spk = New-Object System.Speech.Synthesis.SpeechSynthesizer");
  DigiKeyboard.delay(1000); 
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$usr = 'u004du0020u0055u0020u004cu0020u0045u0020u795du5927u5bb6u65b0u5e74u5febu4e50u0020u4e07u4e8bu5982u610f'");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);



  DigiKeyboard.delay(2000);
  DigiKeyboard.print("$evaluator={param($v)[char][int]($v.Value.replace('u','0x'))}");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);
  DigiKeyboard.print("$d=[regex]::Replace($usr,'u[0-9-a-f]{4}',$evaluator)");
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);
  DigiKeyboard.print("cls echo");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);
  DigiKeyboard.print("echo $d");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  DigiKeyboard.delay(200);
  DigiKeyboard.print("$spk.Speak(\"$d\")");
  DigiKeyboard.delay(200);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);



  for (;;) {
    /*empty*/
  }

}
