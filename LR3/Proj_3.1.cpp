#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x1, x2, y, r;
	cout << "Type r:" << " ";
	cin >> r;
	cout << "Type x1:" << " ";
	cin >> x1;
	cout << "Type x2:" << " ";
	cin >> x2;
	if ((x1 == -10) and (x2 == 6))
	{
		cout << "\t\t" << "X" << "\t" << "Y" << endl;
		for (x1 = -10; x1 < 0; x1++)
		{
			y = -0.5 * x1 - 3;
			cout << "\t\t" << x1 << "\t" << y << endl;
		}
		for (x1 = 0; x1 < 3; x1++)
		{
			y = -sqrt(r * r - x1 * x1);
			cout << "\t\t" << x1 << "\t" << y << endl;
		}
		for (x1 = 3; x1 <= 6; x1++)
		{
			y = sqrt(r * r - (x1 - 6) * (x1 - 6));
			cout << "\t\t" << x1 << "\t" << y << endl;
		}
	}
	else cout << "Wrong scope";
	return 0;
}
