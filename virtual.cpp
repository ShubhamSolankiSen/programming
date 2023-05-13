#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout << " print base class   " << endl;
    }
    void show()
    {
        cout << "show base class " << endl;
    }
};
class Derived : public Base
{
public:
    void print()
    {
        cout << "print derived class " << endl;
    }
    void show()
    {
        cout << "show derived  class " << endl;
    }
};
int main()
{
    Base *bptr;
    Derived d;
    bptr = &d;
    bptr->print();
    bptr->show();

    return 0;
}