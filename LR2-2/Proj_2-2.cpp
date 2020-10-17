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
	MainHeading[] = "��������� ������������� ����������", 
	heading1[] = "��� ���������� ", 
	heading2[] = "�������� ",
	heading3[] = "������������� �������� (��) ",
	heading4[] = "����� � ������ (���) ",
	note[] = "����������: �� - �������, �� - ����������, � - �������",
	transport1[256], transport2[256], transport3[256],
	route1[256], route2[256], route3[256];
	float RouteLength1, RouteLength2, RouteLength3;
	int TravelTime1, TravelTime2, TravelTime3;
	cout << "�������� ������ ��� �������: ";
	cin >> symbol;
    cout << "�������� ��� ����������: ";
	cin >> transport1;
	cout << "�������� �������, ������������� ������� (��) � ����� � ������ ��� " << transport1 << ": ";
	cin >> route1 >> RouteLength1 >> TravelTime1;
	cout << "�������� ��� ����������: ";
	cin >> transport2;
	cout << "�������� �������, ������������� ������� (��) � ����� � ������ ��� " << transport2 << ": ";
	cin >> route2 >> RouteLength2 >> TravelTime2;
	cout << "�������� ��� ����������: ";
	cin >> transport3;
	cout << "�������� �������, ������������� ������� (��) � ����� � ������ ��� " << transport3 << ": ";
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
