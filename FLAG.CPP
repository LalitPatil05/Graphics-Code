#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){
	int gd = DETECT;
	int gm;

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	rectangle(100,100,300,175);
	line(100,125,300,125);
	line(100,150,300,150);
	line(100,100,100,300);
	rectangle(50,300,150,325);
	rectangle(25,325,175,350);
	rectangle(0,350,200,375);

	circle(200,138,12);    //Ashok Chakra Circle
	line(188,138,212,138); //Horizontal Line in Ashok Chakra
	line(200,125,200,150); //Vertical Line in Ashok Chakra
	line(200,138,190,147);
	line(200,138,210,146);
	line(200,138,210,130);
	line(200,138,193,130);


	getch();
	closegraph();

}