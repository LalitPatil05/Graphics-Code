#include<graphics.h> 
#include<stdlib.h> 
#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
void main() 
{ 
int gm,gd=DETECT; 
int x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,c; 
int sx,sy,tx,ty,r; 
float t; 
initgraph(&gd,&gm,"c:\\turboc3\\bgi"); 
printf("\t*** Programe for basic teansformations ***\n"); 
printf("\n\tEnter the points of triangle"); 
setcolor(3); 
scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3); 
line(x1,y1,x2,y2); 
line(x2,y2,x3,y3); 
line(x3,y3,x1,y1); 
getch(); 
printf("\n1.rotation,\n2.exit"); 
printf("\nEnter your choice:"); 
scanf("%d",&c); 
switch(c) 
{ 
case 1: printf("\nEnter the angle of rotation:"); 
scanf("%d",&r); 
t=3.14*r/180; 
nx1=abs(x1*cos(t)-y1*sin(t)); 
ny1=abs(x1*sin(t)+y1*cos(t)); 
nx2=abs(x2*cos(t)-y2*sin(t)); 
ny2=abs(x2*sin(t)+y2*cos(t)); 
nx3=abs(x3*cos(t)-y3* sin(t)); 
ny3=abs(x3*sin(t)+y3* cos(t)); 
line(nx1,ny1,nx2,ny2); 
line(nx2,ny2,nx3,ny3); 
line(nx3,ny3,nx1,ny1); 
getch(); 
case 2: exit: 
break; 
default:printf("Your enter choice is not valid"); 
break; 
} 
closegraph(); 
}