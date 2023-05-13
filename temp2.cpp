#include <iostream>
using namespace std;

template <class T1, class T2>
class MyClass
{
public:
    int data1;
    float data2;
    MyClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << endl <<this-> data2;
    }
};

int main()
{
    MyClass<int , float> s(9, 5.5);
    s.display();
    return 0;
}