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
		cout << "Type x1 argument:" << " ";
		cin >> xArg1;
		cout << "Type x2 argument:" << " ";
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
	for (xArg1=xArg1;xArg1<=xArg2;xArg1+=xStep)
	{
		int n = 0;
		float xSum = 0, xFunc = 999;
		while (xFunc>eps)
		{
			xFunc = ((pow(-1, n) * pow(xArg1, n + 1)) / (n + 1));
			xSum += xFunc;
			n++;
		}
		cout << "|" << xArg1 << "\t|" << xSum << "\t|" << n << "\t|" << endl;
		cout << "|-------|-------|-------|" << endl;
	}
	return 0;
}
