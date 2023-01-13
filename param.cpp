#include <iostream>
using namespace std;

class point
{
    int a, b;

public:
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void displaypoint()
    {
        cout<<"The point is ("<<a<<" , "<<b<<")" <<endl;
    }
};
int main()
{
    point p(5,6);
    p. displaypoint();

    point q(7,8);
    q. displaypoint();

    return 0;
}