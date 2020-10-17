#include <iostream>
using namespace std;
class X
{
protected:
    int x1, x2; 
public:
    X(int x1, int x2)
    {
        this->x1 = x1;
        this->x2 = x2;
    }
    virtual void print()
    {
        cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
    }
    virtual void set()
    {
        cout << "Type x1: ";
        cin >> x1;
        cout << "Type x2: ";
        cin >> x2;
    }
    ~X(){}
};
class Y :public X
{
    int y; 
public:
    Y(int x1, int x2, int y) : X(x1, x2) 
    {
        this->y = y;
    }
    void print() override
    {
        cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl << "y = " << y << endl;
    }
    void set() override
    {
        cout << "Type x1: ";
        cin >> x1;
        cout << "Type x2: ";
        cin >> x2;
        cout << "Type y: ";
        cin >> y;
    }
    void Run()
    {
        cout << "Result: " << (x1 - x2) * y << endl;
    }
   ~Y(){}

};
int main()
{
    X* obj = new X(1, 2);
    cout << "Class X" << endl;
    obj->print();
    obj->set();
    obj->print();
    obj = new Y(1, 2, 3); 
    cout << "Class Y" << endl;
    obj->print(); 
    obj->set(); 
    obj->print(); 
    ((Y*)obj)->Run();
    delete obj; 
    system("pause");
    return 0;
}

