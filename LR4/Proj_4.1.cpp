#include <iostream>
#include <graphics.h>
#include <cmath>
using namespace std;
int main()
{
	float x1, x2, y, r = 3, helpX, helpY;
	cout << "Type x1:" << " ";
	cin >> x1;
	cout << "Type x2:" << " ";
	cin >> x2;
	initwindow(800,800);
	moveto(400,400);
	setcolor(WHITE);
	line(700,400,100,400);//Ось X
	moveto(700,400);      
	lineto(690,410);
	moveto(700,400);
	lineto(690,390);
	line(400,280,400,520);//Ось Y
	moveto(400,280);      
	lineto(410,290); 
	moveto(400,280);
	lineto(390,290);
	outtextxy(700,400,"X");//Разметка и расстановка чисел
	outtextxy(415,280,"Y");
	outtextxy(405,405,"0");
	outtextxy(370,410,"-1");
	line(370,395,370,405);
	outtextxy(340,410,"-2");
	line(340,395,340,405);
	outtextxy(310,410,"-3");
	line(310,395,310,405);
	outtextxy(280,410,"-4");
	line(280,395,280,405);
	outtextxy(250,410,"-5");
	line(250,395,250,405);
	outtextxy(220,410,"-6");
	line(220,395,220,405);
	outtextxy(190,410,"-7");
	line(190,395,190,405);
	outtextxy(160,410,"-8");
	line(160,395,160,405);
	outtextxy(130,410,"-9");
	line(130,395,130,405);
	outtextxy(95,410,"-10");
	line(100,395,100,405);
	outtextxy(430,410,"1");
	line(430,395,430,405);
	outtextxy(460,410,"2");
	line(460,395,460,405);
	outtextxy(490,410,"3");
	line(490,395,490,405);
	outtextxy(520,410,"4");
	line(520,395,520,405);
	outtextxy(550,410,"5");
	line(550,395,550,405);
	outtextxy(580,410,"6");
	line(580,395,580,405);
	outtextxy(610,410,"7");
	line(610,395,610,405);
	outtextxy(640,410,"8");
	line(640,395,640,405);
	outtextxy(410,430,"-1");
	line(395,430,405,430);
	outtextxy(410,460,"-2");
	line(395,460,405,460);
	outtextxy(410,490,"-3");
	line(395,490,405,490);
	outtextxy(410,370,"1");
	line(395,370,405,370);
	outtextxy(410,340,"2");
	line(395,340,405,340);
	outtextxy(410,310,"3");
	line(395,310,405,310);
	setcolor(3);
	if ((x1 == -10) and (x2 == 6))
	{
		cout << "\t\t" << "X" << "\t" << "Y" << endl;
		for (x1 = -10; x1 < 0; x1++)
		{
			y = -0.5 * x1 - 3;
			if ((x1>-10)and(x1<0))
			{
				moveto(helpX*30+400,helpY*(-30)+400);
				lineto(x1*30+400,y*(-30)+400);
			}
			helpY = y;
			helpX = x1;
			pieslice(x1*30+400,y*(-30)+400,0,360,3);
			cout << "\t\t" << x1 << "\t" << y << endl;
		}
	    line(helpX*30+400,helpY*(-30)+400,400,490);
		for (x1 = 0; x1 < 3; x1++)
		{
			y = -sqrt(r * r - x1 * x1);
			pieslice(x1*30+400,y*(-30)+400,0,360,3);
			cout << "\t\t" << x1 << "\t" << y << endl;
		}
		arc(400,400,270,360,r*30);
		for (x1 = 3; x1 <= 6; x1++)
		{
			y = sqrt(r * r - (x1 - 6) * (x1 - 6));
			pieslice(x1*30+400,y*(-30)+400,0,360,3);
			cout << "\t\t" << x1 << "\t" << y << endl;
		}
		arc(580,400,90,180,r*30);
	}
	else cout << "Wrong scope";
	getch();
	closegraph();
	return 0;
}
