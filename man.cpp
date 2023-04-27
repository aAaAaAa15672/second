#include "graphics.h"
int wx=800, wy=600;
void man();
void head(int x, int y, int r);
void body(int a, int b, int h, int h1);
void lefthand(int a1, int b1, int h2, int h3);
void righthand(int a2, int b2, int h4, int h5);
void leftleg(int a3, int b3, int h6, int h7);
void rightleg(int a4, int b4, int h8, int h9);

int main(){
   initwindow(800, 600, "man", 0, 0, true); 
   int k=0;
   while(1){
      setbkcolor(WHITE);
      clearviewport();
      ++k;
      man();
      swapbuffers();
      delay(200);
      if(kbhit()) break;
   }
   closegraph();
}
 
void man(){
   static int x=415, y=328, a=390, b=350, h=440, h1=450, a1=440, b1=350, h2=450, h3=420, a2=380, b2=350, h4=390, h5=420;
   head(x, y, 22);
   body(a, b, h, h1);
   lefthand(a1, b1, h2, h3);
   righthand(a2, b2, h4, h5);
   rightleg(395, 450, 410, 530);
   leftleg(420, 450, 435, 530);
}
 
void head(int x, int y, int r){
   setcolor(COLOR(244, 205, 138));
   setfillstyle(SOLID_FILL, COLOR(250, 200, 150));
   fillellipse(x, y, r, r);
}
 
void body(int a, int b, int h, int h1){
   setfillstyle(SOLID_FILL, RED);
   bar(390, 350, 440, 450);
}      
 
void lefthand(int a1, int b1, int h2, int h3){
   setfillstyle(SOLID_FILL, RED);
   bar(440, 350, 450, 420);
}      
 
void righthand(int a2, int b2, int h4, int h5){
   setfillstyle(SOLID_FILL, RED);
   bar(380, 350, 390, 420);
}   
 
void leftleg(int a3, int b3, int h6, int h7){
   setfillstyle(SOLID_FILL, COLOR(0,49,83));
   bar(420, 450, 435, 530);
}   
 
void rightleg(int a4, int b4, int h8, int h9){
   setfillstyle(SOLID_FILL, COLOR(0,49,83));
   bar(395, 450, 410, 530);
}   
