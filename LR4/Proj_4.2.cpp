#include <iostream>
#include <graphics.h>
using namespace std;
int main()   
{
	int x, y ,r;
	int Rec[6]; //Массив для заливки треугольника
	cout << "Type r:" << " ";
	cin >> r;
	Rec[0] = 400; 
	Rec[1] = 400;
	Rec[2] = r*(-30)+400;
	Rec[3] = r*30+400;
	Rec[4] = 400;
	Rec[5] = r*30+400;
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
	outtextxy(370,410,"-1");//Для X
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
	outtextxy(670,410,"9");
	line(670,395,670,405);
	outtextxy(700,410,"10");
	line(700,395,700,405);
	outtextxy(410,430,"-1");//Для Y
	line(395,430,405,430);
	outtextxy(410,460,"-2");
	line(395,460,405,460);
	outtextxy(410,490,"-3");
	line(395,490,405,490);
	outtextxy(410,520,"-4");
	line(395,520,405,520);
	outtextxy(410,550,"-5");
	line(395,550,405,550);
	outtextxy(410,580,"-6");
	line(395,580,405,580);
	outtextxy(410,610,"-7");
	line(395,610,405,610);
	outtextxy(410,640,"-8");
	line(395,640,405,640);
	outtextxy(410,670,"-9");
	line(395,670,405,670);
	outtextxy(410,700,"-10");
	line(395,700,405,700);
	outtextxy(410,370,"1");
	line(395,370,405,370);
	outtextxy(410,340,"2");
	line(395,340,405,340);
	outtextxy(410,310,"3");
	line(395,310,405,310);
	outtextxy(410,280,"4");
	line(395,280,405,280);
	outtextxy(410,250,"5");
	line(395,250,405,250);
	outtextxy(410,220,"6");
	line(395,220,405,220);
	outtextxy(410,190,"7");
	line(395,190,405,190);
	outtextxy(410,160,"8");
	line(395,160,405,160);
	outtextxy(410,130,"9");
	line(395,130,405,130);
	outtextxy(410,100,"10");
	line(395,100,405,100);
	setfillstyle(1,WHITE); 
	bar(0,0,400,400);
	setfillstyle(1,BLACK);
	pieslice(400,400,90,180,r*30);
	setfillstyle(1,WHITE);
	pieslice(400,400,0,90,r*30);
	fillpoly(3,Rec);
	setcolor(RED);
	setfillstyle(1,RED);
	cout << "Type x y ten times:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> x;
		cin >> y;
		if (((x > 0) and (x < r) and (y < r) and (y > 0) and (r * r > y* y + x * x)) // Четверть окружности 
			or
			((x < 0) and (y > 0) and (r * r < y * y + x * x)) // Область за окружностью 
			or
			((y > -r) and (y < 0) and (x > -r) and (x < 0) and (x > y))) //Треугольник
		{
			if ((x > 0) and (x < r) and (y < r) and (y > 0) and (r * r > y* y + x * x))
		    {
			   pieslice(x*30+400,y*(-30)+400,0,360,3);
			   cout << "True" << endl;
		    }
		    if ((x < 0) and (y > 0) and (r * r < y * y + x * x))
		    {
			   pieslice(x*30+400,y*(-30)+400,0,360,3);
			   cout << "True" << endl;
		    }
		    if ((y > -r) and (y < 0) and (x > -r) and (x < 0) and (x > y))
		    {
			   pieslice(x*30+400,y*(-30)+400,0,360,3);
			   cout << "True" << endl;
		    }
		}
		else cout << "False" << endl;
	}
	getch();
	closegraph();
	return 0;
}
