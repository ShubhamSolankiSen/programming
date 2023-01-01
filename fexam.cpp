#include <iostream>
using namespace std;

class Y;

class X
{
    int data;

public:
    void setvalue(int value)
    {
        data = value;
    }
    friend void add(X, Y);
};
class Y
{
public:
    int num;
    void setvalue(int value)
    {
        num = value;
    }
    friend void add(X, Y);
};
void add(X o1, Y o2)
{
    cout << "Summing data o1 and o2 gives me " << o1.data + o2.num << endl;
}

int main()
{
    X a1;
    a1.setvalue(6);

    Y b1;
    b1.setvalue(7);

    add(a1, b1);

    return 0;
}