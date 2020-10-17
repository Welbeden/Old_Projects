#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int range, counter = 0;
	cout << "¬ведите размер массива: ";
	cin >> range;
	cout << "¬ведите числа дл€ массива: " << endl;
	int *A = new int[range];
	for(int i = 0; i < range; i++)
	{
		cout << "A[" << i + 1 << "] = ";
		cin >> *(A + i);
		if(*(A + i) < 0)
		{
			counter++;
		}
	}
	cout << endl;
	for(int i = 0; i < range; i++)
	{
		for(int j = 0; j < range - i - 1;j++)
		{
			if(*(A + j) > *(A + j + 1))
			{
				int help;
				help = *(A + j);
				*(A + j) = *(A + j + 1);
				*(A + j + 1) = help;
				
			}
		}
	}
	if(counter >= 1)
	{
		cout << "–езультат: " << endl;
		int *B = new int[counter];
		for(int i = 0; i < range; i++)
		{
			if(*(A + i) < 0)
			{
				*(B + i) = *(A + i);;
			}
		}
		for(int i = 0; i < counter; i++)
		{
			cout << "B[" << i + 1 << "] = " << *(B + i) << endl;
		}
		delete [] B;
	}
	delete [] A;
	system("pause");
	return 0;
}
