#include <iostream>
#include <iomanip>
#include <Windows.h>
using namespace std;
void Line(char symbol)
{
	for(int i = 0; i < 82;i++)
	cout << symbol;
	cout << endl;
}
void CropStr(const char str[])
{
	char str1[12];
	for (int i = 0; i < 10; i++)
	{
		str1[i] = str[i];
	}
	for (int i = 7; i <= 10; i++)
	{
		str1[i] = '.';
		if (i == 10)
		{
			str1[i] = '\0';
		}
	}
	cout << str1;
}
int main()
{ 
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout.precision(5);
	char symbol, 
	MainHeading[] = "Ведомость общественного транспорта", 
	heading1[] = "Вид транспорта ", 
	heading2[] = "маршрута ",
	heading3[] = "Протяженность маршрута (км) ",
	heading4[] = "Время в дороге (мин) ",
	note[] = "Примечание: Тр - трамвай, Тс - троллейбус, А - автобус",
	transport1[256], transport2[256], transport3[256],
	route1[256], route2[256], route3[256];
	float RouteLength1, RouteLength2, RouteLength3;
	int TravelTime1, TravelTime2, TravelTime3;
	cout << "Напишите символ для таблицы: ";
	cin >> symbol;
    cout << "Напишите вид транспорта: ";
	cin >> transport1;
	cout << "Напишите маршрут, протяженность маршута (км) и время в дороге для " << transport1 << ": ";
	cin >> route1 >> RouteLength1 >> TravelTime1;
	cout << "Напишите вид транспорта: ";
	cin >> transport2;
	cout << "Напишите маршрут, протяженность маршута (км) и время в дороге для " << transport2 << ": ";
	cin >> route2 >> RouteLength2 >> TravelTime2;
	cout << "Напишите вид транспорта: ";
	cin >> transport3;
	cout << "Напишите маршрут, протяженность маршута (км) и время в дороге для " << transport3 << ": ";
	cin >> route3 >> RouteLength3 >> TravelTime3;
	Line(symbol);
	cout << symbol << MainHeading << setw(47) << symbol << endl;
	Line(symbol);
	cout << symbol << heading1 << symbol << heading2 << setw(5) << symbol << heading3 << symbol << heading4 << symbol << endl;
	Line(symbol);
	cout << symbol << setw(15); CropStr(transport1); cout << symbol << setw(13); CropStr(route1); cout << symbol << setw(28) << RouteLength1 << symbol << setw(21) << TravelTime1 << symbol << endl;
	Line(symbol);
	cout << symbol << setw(15); CropStr(transport2); cout << symbol << setw(13); CropStr(route2); cout << symbol << setw(28) << RouteLength2 << symbol << setw(21) << TravelTime2 << symbol << endl;
	Line(symbol);
	cout << symbol << setw(15); CropStr(transport3); cout << symbol << setw(13); CropStr(route3); cout << symbol << setw(28) << RouteLength3 << symbol << setw(21) << TravelTime3 << symbol << endl;
	Line(symbol);
	cout << symbol << note << setw(27) << symbol << endl;
	Line(symbol);
	return 0;
}
