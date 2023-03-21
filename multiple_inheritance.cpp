#include <iostream>
using namespace std;
int a,b;
class A
{
public:
void getdata1()
{
    cout<<"Enter the first value"<<endl;
    cin>>a;
}
};

class B
{
public:
void getdata2()
{
    cout<<"Enter the second value"<<endl;
    cin>>b;
}
};

class c:public A , public B

{
    public:
    void Add()
    {
        cout<<"The answer is "<<a+b<<endl;

    }


};


    
int main(){
    c a;
    a.getdata1();
    a.getdata2();
    
    a.Add();
    
    return 0;
}