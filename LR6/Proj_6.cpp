#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
long MultFinder(int A[][100], int N, long* counter);
void MaxFinder(int A[][100],int N,int *max); 
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL,"Russian");
	int N;
	const int W = 100;
	int maxS = 0;
	long mult = 1;
	cout << "Type range of array: ";
	cin >> N;
	int A[W][W];
	for (int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
			A[i][j] = rand() % 10 + (-2);
		}
	}
	MaxFinder(A, N, &maxS);
	MultFinder(A, N, &mult);
	cout << endl;
	cout << "Array: " << endl;
	for (int i = 0; i < N; i++)
	{
		for(int j = 0; j < N; j++)
		{
		cout << A[i][j] << "\t"; 
		}
		cout << endl << endl;
	}
	if(mult == 1)
	{
		cout << "Multiplication is equal to: " << 0;
	}
	else cout << "Multiplication is equal to: " << mult << endl;
	cout << "Maximum sum of numbers is: " << maxS << endl;
	return 0;
}
void MaxFinder(int A[][100],int N,int *max)
{
	int sum = 0;
	for(int k=1;k<N;k++)
	{
		sum=0;
		for(int n=0;n<N-k;n++)
		    sum+=A[n][n+k];
	    if(sum>*max)
		    *max=sum;
		    
		sum=0;
		for(int n=0;n<N-k;n++)
		    sum+=A[n+k][n];
	    if(sum>*max)
		    *max=sum;
	}
}
long MultFinder(int A[][100], int N, long* counter)
{
	int helper;
	for (int i = 0; i < N; i++)
	{
		helper = 0;
		for (int j = 0; j < N; j++)
		{
			if (A[i][j] >= 0)
			{
				helper += 1;
			}
		}
		if (helper == N)
		{
			for (int j = 0; j < N; j++)
			{
				*counter *= A[i][j];
			}
		}
	}
	return 0;
}