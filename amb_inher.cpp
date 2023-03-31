#include <iostream>
using namespace std;

class Base1{
public:
void greet(){
    cout<<" Hello, Kaise Ho "<<endl;
}
};

class Base2{
public:
void greet(){
    cout<<" Bas Badiya Hu  "<<endl;
}
};

/*
class Derived:public Base1, Base2{
public:
void greet(){
    Base1::greet();
}
};
*/
class B{
 public:
void say(){
    cout<<" Hello World "<<endl;
}
};

class D{
 public:
void say(){
    cout<<" Hello, my beautiful peoples"<<endl;
}
};

int main(){
// Ambuibuty 1

   /* Base1 base1obj;
    Base2 base2obj;
    
    base1obj.greet();
    base2obj.greet();

    Derived d;
    d.greet();
    */

//   Ambuibuty 2

B b;
b.say();

D d;
d.say();
    
    return 0;
}