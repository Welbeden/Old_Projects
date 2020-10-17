#include <iostream>
using namespace std;
int main()
{
	int r, x, y;
	cout << "Type r:" << " ";
	cin >> r;
	cout << "Type x y ten times:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> x;
		cin >> y;
		if (((x > 0) and (x < r) and (y < r) and (y > 0) and (r * r > y* y + x * x)) // A quater of circle 
			or
			((x < -r) and (y > r) and (r * r < y * y + x * x)) // Area behind the circle 
			or
			((y > -r) and (y < 0) and (x > -r) and (x < 0) and (x > y))) //Triangle
		{
			cout << "True" << endl;
		}
		else cout << "False" << endl;
	}
	return 0;
}
