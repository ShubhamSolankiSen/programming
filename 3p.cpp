#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void getdata(int a)
    {
        this->a = a;
    }
    void setdata()
    {
        cout << "The value of a is " << a << endl;
    }
};
int main()
{
    A a;
    a.getdata(7);
    a.setdata();
    return 0;
}