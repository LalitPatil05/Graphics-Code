#include<stdio.h> 
#include<conio.h> 
#include<graphics.h> 
int x,y,r; 
float a,b,d; 
void bresan(); 
void pixel(float a,float b); 
void main() 
{ 
int gm,gr; 
clrscr(); 
detectgraph(&gm,&gr); 
initgraph(&gm,&gr,"c:\\turboc3\\bgi"); printf("\Enter the center point of the circle:\n"); 
scanf("%d%d",&x,&y); 
printf("\Enter the radius of circle:\n"); 
scanf("%d",&r); 
bresan(); 
getch(); 
} 
void bresan() 
{ 
a=0; 
b=r; 
d=3-2*r; 
while(a<=b) 
{ 
a++; 
if(d>=0) 
{ 
b--; 
d=d+10+4*(a-b); 
} 
else 
d=d+(4*a)+6; 
pixel(a,b); 
} 
} 
void pixel (float a,float b) 
{ 
putpixel (x+a,y+b,1); 
putpixel (x-a,y-b,2); 
putpixel (x+a,y-b,3); 
putpixel (x-a,y+b,4); 
putpixel(x+b,y+a,5); 
putpixel(x-b,y-a,6); 
putpixel(x+b,y-a,7); 
putpixel(x-b,y+a,8); 
}