#include <iostream>
using namespace std;

int a, b, c;
class A
{
public:
    void getdata1()
    {
        cout << "Enter the first value" << endl;
        cin >> a;
    }
};

class B : virtual public A
{
public:
    void getdata2()
    {
        cout << "Enter the second value" << endl;
        cin >> b;
    }
};
class C : virtual public A
{
public:
    void getdata3()
    {
        cout << "Enter the third value" << endl;
        cin >> c;
    }
};

class D : public B, public C
{
public:
    void Add()
    {
        cout << "The answer is " << a + b + c << endl;
    }
};

int main()
{
    D a;
    a.getdata1();
    a.getdata2();
    a.getdata3();
    a.Add();

    return 0;
}