#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
#include<math.h> 
#include<dos.h> 
void main() 
{ 
float x,y,x1,y1,x2,y2,dx,dy,step; 
int i=1,gd=DETECT,gm; 
initgraph(&gd,&gm,"C:\\turboc3\\BGI"); 
printf("Enter The Value Of x1 and y1:-"); 
scanf("%f%f",&x1,&y1); 
printf("Enter The Value Of x2 and y2:-"); 
scanf("%f%f",&x2,&y2); 
dx=x2-x1; 
dy=y2-y1; 
if(dx>=dy) 
step=dx; 
else 
step=dy; 
dx=dx/step; 
dy=dy/step; 
x=x1; 
y=y1; 
while(i<=step) 
{ 
} 
putpixel(x,y,5); 
x=x+dx; 
y=y+dy; 
i=i+1; 
delay(100); 
closegraph(); 
getch(); 
}