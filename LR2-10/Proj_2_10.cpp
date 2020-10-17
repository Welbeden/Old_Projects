#include <iostream>
using namespace std;
class A
{
public:
	void f()
	{
		cout << "A";
	}
};
class B : public virtual A
{
public:
	void f()
	{
		cout << "B";
	}
};
class C : public virtual A
{
public:
	void f()
	{
		cout << "C";
	}
};
class E : public virtual C
{
public:
	void f()
	{
		cout << "E";
	}
};
class D : public virtual C, public virtual E
{
public:
	void f()
	{
		cout << "D";
	}
};
class F :public virtual  A, public virtual C, public virtual D, public virtual E
{

};
int main()
{
	F obj;
	obj.f();
	cout << endl;
	system("pause");
	return 0;
}
