#include<graphics.h> 
#include<stdlib.h> 
#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
void main() 
{ 
int gm,gd=DETECT; 
int x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3,c; 
int sx,sy; 
float t; 
initgraph(&gd,&gm,"c:\\turboc3\\bgi"); 
printf("\t*** Programe for basic teansformations***\n"); 
printf("\n\tEnter the points of triangle"); 
setcolor (3); 
scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3); 
line(x1,y1,x2,y2); 
line (x2,y2,x3,y3); 
line(x3,y3,x1,y1); 
getch(); 
printf("\n1.Scalling,\n2.exit"); 
printf("\nEnter Your Choice :"); 
scanf("%d",&c); 
switch(c) 
{ 
case 1: printf("\nEnter the scalling factor:"); 
printf("sx,sy"); 
scanf("%d%d",&sx,&sy); 
nx1=x1*sx; 
ny1=y2*sy; 
nx2=x2*sx; 
ny2=y2*sy; 
nx3=x3*sx; 
ny3=y3*sy; 
line(nx1,ny1,nx2,ny2); 
line (nx2,ny2,nx3,ny3); 
line(nx3,ny3,nx1,ny1); 
getch(); 
case 2: exit: 
break; 
default:printf("Your enter choice is not valid"); 
break; 
} 
closegraph(); 
}