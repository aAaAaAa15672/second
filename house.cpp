#include "graphics.h"
#include "picture.hpp"

void house (){
   int x = 800*1/9;
   int y = 600*2/3; 
   int h = 600/5;
   setfillstyle(SOLID_FILL, COLOR(128,64,48));
   bar(x,y,x+150,y+150);
   int v[] = {x-50, y, x+200/2, y-200/2,x+200, y};
   setcolor(RED);
   setfillstyle(SOLID_FILL, RED);
   fillpoly(3, v);
   setfillstyle(BKSLASH_FILL, WHITE);
   bar(x+33, y+33, x+66, y+66);
}
