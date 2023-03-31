#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex()
    {
        a = 0;
        b = 0;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void printnumber()
    {
        cout << "The number is " << a << " + " << b << " i " << endl;
    }
};
int main()
{

    complex c1(5, 6);
    c1.printnumber();

    complex c2(0);
    c2.printnumber();


    complex c3(9);
    c3.printnumber();


    return 0;
}