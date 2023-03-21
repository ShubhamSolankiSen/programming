#include <iostream>
using namespace std;

class A
{
public:
    void display()
    {
        cout << "Shubham Solanki"<< endl;
    }
};
class B : public A
{
public:
    void printer()
    {
        cout << "BCA first year Student" << endl;
    }
};
class C : public B{
    public :
        void city(){

            cout << "Neemuch" << endl;
}
};


int main()
{
    C s1;
    s1.display();
    s1.printer();
    s1.city();
    return 0;
}
