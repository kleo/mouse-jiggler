/*****************************************************************
  This program is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program.  If not, see http://www.gnu.org/licenses/.
  
  Code by Potatopasty http://tg-music.neocities.org
  potatopasty@pm.me
  ******************************************************************/
  
#include <DigiMouse.h>
void setup(){
  DigiMouse.begin();
}
 
void loop() {
  while(true) {
    DigiMouse.move(2,0,0); // 2px right
    digitalWrite(1, HIGH);
    DigiMouse.delay(1000);
    DigiMouse.move(-2,0,0); // 2px left
    digitalWrite(1, LOW);
    DigiMouse.delay(30000);
  }
}
