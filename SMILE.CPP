#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){

	int gd = DETECT;
	int gm;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	circle(200,200,130);   //MainCircle
	circle(130,180,20);   //Left Eye Circle
	circle(260,180,20);   //Right Eye Circle
	arc(200,240,180,0,50); //Mouth Arc


getch();
closegraph();
}