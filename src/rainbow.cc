#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<graphics.h>

float translate(float value, float leftMin,float leftMax,float rightMin,float rightMax){
    // Figure out how 'wide' each range is
    float leftSpan = leftMax - leftMin;
    float rightSpan = rightMax - rightMin;

    //# Convert the left range into a 0-1 range (float)
    float valueScaled =(value - leftMin) /(leftSpan);

    //# Convert the 0-1 range into a value in the right range.
    return rightMin + (valueScaled * rightSpan);
}
int main(){
int gdriver = DETECT, gmode;
initwindow(700, 700);
int x,y,i;
x=getmaxx()/2;
y=getmaxy()/2;
for ( i = 0; i < 300; i++)
{
    delay(100);
   setcolor(translate(i/10%16, 0, 16,1,15));
    arc(x,y,0,180,i);
}
getch();
closegraph();
   return 0;
}