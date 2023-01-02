#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    void getdata(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    friend complex sumcomplex(complex o1, complex o2);
    void display()
    {
        cout << "your number is " << a << " + " << b << " i " << endl;
    }
};
complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.getdata((o1.a + o2.a), (o2.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.getdata(3, 4);
    c1.display();

    c2.getdata(7, 8);
    c2.display();

    sum = sumcomplex(c1, c2);
    sum.display();

    return 0;
}
