#include <graphics.h>
#include <sstream>
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float xArg1, xArg2, eps, xStep; 
	eps = 0.001;
	cout.precision(3);
	while (1)
	{
		cout << "Type x1 argument:" << " " << endl;
		cin >> xArg1;
		cout << "Type x2 argument:" << " " << endl;
		cin >> xArg2;
		if ((xArg1 > -1) and (xArg1 <= 1)and(xArg2>xArg1))
		{
			break;
		}
		else continue;
	}
	cout << "Type step of xArg1:" << " ";
	cin >> xStep;
	cout << endl;
	cout << "Function ln(x+1)" << endl;
	cout << "|-------|-------|-------|" << endl;
	cout << "|x\t|ln\t|n\t|" << endl;
	cout << "|-------|-------|-------|" << endl;
	//Начало построения графика
    initwindow(800,800);
	moveto(400,400);
	setcolor(WHITE);
	line(730,400,100,400);//Ось X
	moveto(730,400);      
	lineto(720,410);
	moveto(730,400);
	lineto(720,390);
	line(400,700,400,70);//Ось Y
	moveto(400,70);      
	lineto(410,80); 
	moveto(400,70);
	lineto(390,80);
	outtextxy(730,400,"X");//Разметка и расстановка чисел
	outtextxy(415,70,"Y");
	outtextxy(405,405,"0");
	outtextxy(360,410,"-0.1");//Для X
	line(370,395,370,405);
	outtextxy(330,410,"-0.2");
	line(340,395,340,405);
	outtextxy(300,410,"-0.3");
	line(310,395,310,405);
	outtextxy(270,410,"-0.4");
	line(280,395,280,405);
	outtextxy(240,410,"-0.5");
	line(250,395,250,405);
	outtextxy(210,410,"-0.6");
	line(220,395,220,405);
	outtextxy(180,410,"-0.7");
	line(190,395,190,405);
	outtextxy(150,410,"-0.8");
	line(160,395,160,405);
	outtextxy(120,410,"-0.9");
	line(130,395,130,405);
	outtextxy(85,410,"-1");
	line(100,395,100,405);
	outtextxy(430,410,"0.1");
	line(430,395,430,405);
	outtextxy(460,410,"0.2");
	line(460,395,460,405);
	outtextxy(490,410,"0.3");
	line(490,395,490,405);
	outtextxy(520,410,"0.4");
	line(520,395,520,405);
	outtextxy(550,410,"0.5");
	line(550,395,550,405);
	outtextxy(580,410,"0.6");
	line(580,395,580,405);
	outtextxy(610,410,"0.7");
	line(610,395,610,405);
	outtextxy(640,410,"0.8");
	line(640,395,640,405);
	outtextxy(670,410,"0.9");
	line(670,395,670,405);
	outtextxy(700,410,"1");
	line(700,395,700,405);
	outtextxy(410,430,"-0.1");//Для Y
	line(395,430,405,430);
	outtextxy(410,460,"-0.2");
	line(395,460,405,460);
	outtextxy(410,490,"-0.3");
	line(395,490,405,490);
	outtextxy(410,520,"-0.4");
	line(395,520,405,520);
	outtextxy(410,550,"-0.5");
	line(395,550,405,550);
	outtextxy(410,580,"-0.6");
	line(395,580,405,580);
	outtextxy(410,610,"-0.7");
	line(395,610,405,610);
	outtextxy(410,640,"-0.8");
	line(395,640,405,640);
	outtextxy(410,670,"-0.9");
	line(395,670,405,670);
	outtextxy(410,700,"-1");
	line(395,700,405,700);
	outtextxy(410,370,"0.1");
	line(395,370,405,370);
	outtextxy(410,340,"0.2");
	line(395,340,405,340);
	outtextxy(410,310,"0.3");
	line(395,310,405,310);
	outtextxy(410,280,"0.4");
	line(395,280,405,280);
	outtextxy(410,250,"0.5");
	line(395,250,405,250);
	outtextxy(410,220,"0.6");
	line(395,220,405,220);
	outtextxy(410,190,"0.7");
	line(395,190,405,190);
	outtextxy(410,160,"0.8");
	line(395,160,405,160);
	outtextxy(410,130,"0.9");
	line(395,130,405,130);
	outtextxy(410,100,"1");
	line(395,100,405,100);
	//Конец построения графика
	setcolor(3);
	setfillstyle(1,3);
	//Рисование функции
	for (xArg1=xArg1;xArg1<=xArg2;xArg1+=xStep)
	{
		int n = 0;
		float xSum = 0, xFunc = 999;
		while (xFunc>eps)
	    {
			xFunc = ((pow(-1, n) * pow(xArg1, n + 1)) / (n + 1));
			xSum += xFunc;
			n++;
			if(xSum=xArg1)
			{
			   xFunc = ((pow(-1, n) * pow(xArg1, n + 1)) / (n + 1));
			   xSum += xFunc;
			   n++;
			}
			pieslice(xArg1*300+400,xSum*(-300)+400,0,360,3);
		}
		cout << "|" << xArg1 << "\t|" << xSum << "\t|" << n << "\t|" << endl;
		cout << "|-------|-------|-------|" << endl;
		
	}
    getch();
    closegraph();
	return 0;
}
