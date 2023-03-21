#include<iostream>
using namespace std;

class A{
    int a;
    public:
    void getdata()
    {
        a=8;
    }
    void display(){
        cout<<a;
    }
    
};
class B:public A{


};
int main(){
    A a1;
    a1.getdata();
    a1.display();
    return 0;
}