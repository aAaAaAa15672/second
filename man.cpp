#include "graphics.h"
#include "picture.hpp"

void man(){
   static int x=415, y=328;
   setcolor(COLOR(244, 205, 138));
   setfillstyle(SOLID_FILL, COLOR(250, 200, 150));
   fillellipse(x, y, 22, 22);
   setfillstyle(SOLID_FILL, RED);
   bar(390, 350, 440, 450);
   setfillstyle(SOLID_FILL, RED);
   bar(440, 350, 450, 420);
   setfillstyle(SOLID_FILL, RED);
   bar(380, 350, 390, 420);
   setfillstyle(SOLID_FILL, BLACK);
   bar(420, 450, 435, 530);
   setfillstyle(SOLID_FILL, BLACK);
   bar(395, 450, 410, 530);
}
