#include<stdio.h>
#include<conio.h>
#include<graphics.h>

int main(){
clrscr();
	int gd = DETECT;
	int gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");

	rectangle(50,50,400,370);
	rectangle(190,30,250,50);
	outtextxy(210,40,"CPU");
	line(150,122,80,122);
	outtextxy(145,119,">");
	line(80,122,80,325);
	line(80,325,98,325);
	rectangle(150,110,300,135); //Control Unit
	outtextxy(180,120,"CONTROL UNIT");
	line(300,120,375,120);
	line(375,120,375,335);
	line(375,335,350,335);
	outtextxy(350,332,"<");
	line(200,135,200,175);
	line(200,175,205,167);
	line(200,175,195,167);
	line(270,135,270,175);
	outtextxy(267,135,"^");
	rectangle(100,175,350,250); //ALU
	line(374,250,430,250);
	rectangle(430,235,500,272);
	outtextxy(445,250,"OUTPUT");
	outtextxy(425,247,">");
	outtextxy(125,210,"ARITHMETIC AND LOGICAL UNIT");
	line(80,200,30,200);
	rectangle(30,220,0,190);
	outtextxy(5,200,"I/P");
	line(220,250,220,300);
	line(220,300,214,292);
	line(220,300,225,292);
	rectangle(100,300,350,350); //Memory Unit
	outtextxy(170,325,"MEMORY UNIT");

	outtextxy(100,375,"BLOCK DIAGRAM OF COMPUTER..!!");



getch();
closegraph();
}