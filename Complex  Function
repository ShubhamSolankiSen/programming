#include <iostream>
#include <conio.h>
using namespace std;
class complex
{
    float image, real;

public:
    void getdata(float x, float y)
    {
        real = x;
        image = y;
    }
    void display()
    {
        cout << real << " + i " << image;
    }
    complex sum(complex c1, complex c2)
    {
        complex c3;
        c3.real = c1.real + c2.real;
        c3.image = c1.image + c2.image;
        return (c3);
    }
};
int main()
{
    complex p1, p2, p3;
    p1.getdata(4.0, 6.0);
    p2.getdata(5.0, 10.0);
    complex p4 = p3.sum(p1, p2);
    p4.display();
    getch();
    return 0;
}
