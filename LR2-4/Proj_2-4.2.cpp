#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int N, M, result = 1;
	cout << "Введите количество строк и столбцов для массива: ";
	cin >> N >> M;
	cout << endl;
	int** A = new int*[N];
	for (int i = 0; i < N; i++)
		*(A + i) = new int[M];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << "A[" << i + 1 << "][" << j + 1 << "] = ";
			cin >> *(*(A + i) + j);
		}
	}
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (i == j)
			{
				result *= *(*(A + i) + j);
			}
		}
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << *(*(A + i) + j) << "\t";
		}
		cout << endl;
	}
	cout << endl << "Результат: " << result << endl;
	delete[] A;
	system("pause");
	return 0;
}
