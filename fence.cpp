#include "graphics.h"
#include "picture.hpp"

void fence(){
  setcolor(BROWN);
  setfillstyle(SOLID_FILL, COLOR(218, 165, 32));
  int i,j = 15;
  for(i = 0; i <= 1280; i += 25){
    bar(i, 500, j, 600);
    j += 25;
  }
  bar(0, 540, 1280, 545); 
}
