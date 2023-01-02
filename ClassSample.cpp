#include <iostream>
using namespace std;

class sample
{
    int a, b, c;

public:
    void getdata(int p, int q, int r)
    {
        a = p;
        b = q;
        c = r;
    }
    void display()
    {
        cout << a << b << c << endl;
    }
};
int main()
{
sample p1;
p1.getdata(2,4,5);
p1.display();
    return 0;
}
