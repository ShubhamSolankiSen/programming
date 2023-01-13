#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:

    complex(void);

void printnumber()
{
    cout<<"your number is "<<a<<" + "<<b<<" i "<<endl;
}
};
complex::complex(void)
{
    a=2;
    b=3;
}
int main(){
 complex c;
    c.printnumber();
    
    return 0;
}