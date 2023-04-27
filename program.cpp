#include "graphics.h"
#include "picture.hpp"

void treug(int x, int y, int a, int color){
   int v[] = {x, y, x+a/2, y-a/2,x+a, y};
   setcolor(color);
   setfillstyle(SOLID_FILL, color);
   fillpoly(3, v);
}

int main(){ 
   initwindow(800,600);
   house(); // дом
   sun(); // солнце
   man(); // человек
   fence(); // забор
   getch();
   closegraph();
}
