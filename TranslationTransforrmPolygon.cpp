#include<graphics.h> 
#include<stdlib.h> 
#include<stdio.h> 
#include<conio.h> 
#include<math.h> 
void main() 
{ 
int gm,gd=DETECT; 
int x1,x2,x3,y1,y2,y3,nx1,nx2,nx3,ny1,ny2,ny3; 
int tx,ty,c; 
initgraph(&gd,&gm,"c:\\turboc3\\bgi"); 
printf("\t*** Programe for basic transformations ***\n"); 
printf("\n\tEnter the points of triangle:"); 
setcolor(3); 
scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3); 
line(x1,y1,x2,y2); 
line(x2,y2,x3,y3); 
line(x3,y3,x1,y1); 
getch(); 
printf("\n1.Transaction,\n2.exit"); printf("\nEnter your choice:"); 
scanf("%d",&c); 
switch(c) 
{ 
case 1: printf("\nEnter the transaction factor:"); 
scanf("%d%d",&tx,&ty); 
nx1=x1+tx; 
ny1=y1+ty; 
nx2=x2+tx; 
ny2=y2+ty; 
nx3=x3+tx; 
ny3=y3+ty; 
line(nx1,ny1,nx2,ny2); 
line(nx2,ny2,nx3,ny3); 
line(nx3,ny3,nx1,ny1); 
getch(); 
case 2: exit : 
break; 
default:printf("Your enter choice is not valid"); 
break; 
} 
closegraph(); 
}