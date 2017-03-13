#include <Keyboard.h>

char val = 0;

void setup() {
  Keyboard.begin();
  Serial1.begin(9600);
  delay(5000);
}

void loop() {
  if (Serial1.available()) {
    switch (Serial1.read()) {
      case '1' :
        Keyboard.press(KEY_LEFT_GUI);
        Keyboard.press('l');
        Keyboard.releaseAll();
        break ;
      case '2' :
        Keyboard.press(KEY_LEFT_GUI);
        Keyboard.press('r');
        Keyboard.releaseAll();
        delay(300);
        Keyboard.print("shutdown -s -t 0");
        delay(300);
        Keyboard.write(KEY_RETURN);
        break ;
    }
  }
}
