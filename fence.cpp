#include "graphics.h"
#include "picture.hpp"

void doska(int a, int b, int c, int d){
  setcolor(BROWN);
  setfillstyle(SOLID_FILL, COLOR(218, 165, 32));
  bar(a, b, c, d);
}

void fence(){
  int i,j = 15;
  for(i = 0; i <= 1280; i += 25){
    doska(i, 400, j, 500);
    j += 25;
  }
  bar(0, 440, 1280, 445); 
}
