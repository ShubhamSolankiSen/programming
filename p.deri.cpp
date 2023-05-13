#include <iostream>
using namespace std;

class Baseclass
{
public:
    int var_Base;
    void display()
    {
        cout << "Displaying base class variable is " << var_Base << endl;
    }
};

class Derivedclass : public Baseclass
{
public:
    int var_Derived;
    void display()
    {
        cout << "Displaying base class variable is " << var_Base << endl;
        cout << "Displaying derived class variable is " << var_Derived << endl;
    }
};
int main()
{
    void display();
    Baseclass *Base_class_pointer;
    Baseclass obj_base;
    Derivedclass obj_Derived;

Base_class_pointer = &obj_Derived;
    Base_class_pointer-> var_Base=55;
    Base_class_pointer->display();
    return 0;
}