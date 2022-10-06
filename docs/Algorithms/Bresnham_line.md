# Bresnham Simple line drawing algorithm

This algorithm is used for simple line drawing

```c
// Bresnham Simple line drawing algorithm

#include<stdio.h>
#include<string.h>
#include<graphics.h>

int main(){
    int gd=DETECT,gm,x,y,x1,x2,y1,y2,dx,dy,p,i;

    initgraph(&gd,&gm,"C:\\Program Files (x86)\\Colorado\\cs1300\\bgi");

    printf("Enter the staring Co-ordinates : ");
    scanf("%d %d",&x1,&y1);

    printf("Enter the end Co-ordinates : ");
    scanf("%d %d",&x2,&y2);

    dx=(x2-x1);
    dy=(y2-y1);

    x=x1;
    y=y1;

    p=2*dy-dx;

    for ( i = 0; i < dx; i++)
    {
        if(p<0){
            putpixel(x,y,4);
            x=x+1;
            p=p+2*dy;
        }
        else{
            putpixel(x,y,4);
            x=x+1;
            y=y+1;
            p=p+2*dy-2*dx;
        }
    }
    getch();
    closegraph();
   return 0;
}

```