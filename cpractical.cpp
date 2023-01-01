#include <iostream>
using namespace std;

class complex
{
    int x=4;
    int y= 6;
    int image, real;

public:
    void getdata(int x, int y)
    {
        x = real;
        y = image;
    }
    void display()
    {
        cout << real<< "+i" << image << endl;
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
    p1.getdata(4, 5);
    p2.getdata(5, 7);
    complex p4 = p3.sum(p1, p2);
                     p4.display();
    return 0;
}