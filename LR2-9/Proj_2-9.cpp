#include <iostream>
#include <cmath>
using namespace std;
class Solution
{
	double x = 12.3*pow(10,-1), y = 15.4, z = 0.252*pow(10,3), g = 82.8257;
public:
	void set(double x, double y, double z);
	void Run();
	void print();
};
void Solution::set(double x, double y, double z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}
void Solution::Run()
{
	g = pow(y, x + 1) / pow(fabs(y - 2) + 3, 1 / 3) +
		(x + y / 2) / (2 * fabs(x + y)) * pow(x + 1, -1 / sin(z));
}
void Solution::print()
{
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "z = " << z << endl;
	cout << "g = " << g << endl;
}
int main()
{
	double x, y, z;
	cout << "Type x: ";
	cin >> x;
	cout << "Type y: ";
	cin >> y;
	cout << "Type z: ";
	cin >> z;
	static Solution stat;
	stat.set(x, y, z);
	stat.Run();
	stat.print();
	static Solution* p = &stat;
	p->set(x, y, z);
	p->Run();
	p->print();
	Solution* dyn = new Solution;
	(*dyn).set(x,y,z);
	(*dyn).Run();
	(*dyn).print();
	dyn->set(x, y, z);
	dyn->Run();
	dyn->print();
	delete dyn;
	system("pause");
	return 0;
}
