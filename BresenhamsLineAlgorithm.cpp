#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
#include<math.h> 
void main() 
{ 
int dx,dy,x,y,e,x1,y1,x2,y2; 
int gd=DETECT,gm=DETECT; 
initgraph(&gd,&gm,"c:\\turboc3\\bgi "); 
clrscr(); 
printf("\n Enter the co-ordinates of first line :"); 
scanf("%d%d",&x1,&y1); 
printf("\n Enter the co-ordinates of second line:="); 
scanf("%d%d",&x2,&y2); 
dx=abs(x2-x1); 
dy=abs(y2-y1); 
x=x1; 
y=y1; 
e=2*dy-dx; 
putpixel(x,y,RED); 
while(x<=x2) 
{ 
if(e<0) 
{ 
x=x+1; 
y=y+1; 
e=e+2*(dy); 
} 
else 
{ 
x=x+1; 
y=y+1; 
e=e+2* (dy-dx); 
} 
putpixel(x,y,RED); 
} 
getch(); 
closegraph(); 
}