#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
double Random(double min, double max);
void OddSumNum(double A[], int N);
void NegSum(double A[], int N);
void FabsArray(double A[], int N);
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int N;
	cout << "Введите количество чисел в массиве: ";
	cin >> N;
	cout << endl;
	double A[N], help;
	for (int i = 0; i < N; i++)
	{
		A[i] = Random(-5,5);
	}
	cout << "Массив:" << endl;
	for (int i = 0; i < N; i++)
	{
		cout << "A[" << i << "] = " << A[i] << endl;
	}
	cout << endl << "Сумма чисел с нечетными индексами массива: ";
	OddSumNum(A, N);
	cout << endl << "Сумма между отрицательными числами: ";
	NegSum(A, N);
	cout << endl << "Массив, измененный относительно модуля: " << endl;
	FabsArray(A, N);
	return 0;
}
void OddSumNum(double A[], int N)
{
	double count = 0;
	for (int i = 0; i < N; i++)
	{
		if((i % 2) != 0)
		{
			count += A[i];
		}
	}
	cout << count;
}
void NegSum(double A[], int N)
{
	int Neg1, Neg2;
	double Sum = 0;
	for (int i = 0; i < N; i++)
	{
		if(A[i] < 0)
		{
			Neg1 = i;
			break;
		}
	}
	for (int j = N; j > Neg1; j--)
	{
		if(A[j] < 0)
		{
			Neg2 = j;
			break;
		}
	}
	for (int l = Neg1 + 1; l < Neg2; l++)
	{
		Sum += A[l];
	}
	cout << Sum;
}
void FabsArray(double A[], int N)
{
	double help;
	for (int i = 0; i < N; i++)
	{
		if(fabs(A[i]) > 1)
		{
			A[i] = 0;
		}
    }
    for (int i = 0; i < N - 1; i++)
	{
		for(int j = 0; j < N - i - 1; j++)
		{
			if(A[j] == 0)
			{
				help = A[j];
				A[j] = A[j + 1];
				A[j + 1] = help;
			}
		}
    }
    for (int i = 0; i < N; i++)
	{
		cout << "A[" << i << "] = " << A[i] << endl;
	}
}
double Random(double min, double max) 
{ 
return (double)(rand())/RAND_MAX*(max - min) + min; 
} 
