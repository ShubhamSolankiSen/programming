#include<iostream>
using namespace std;

class Employee{
private:
int a,b,c;
public:
int d,e;
void setdata(int a1,int b2, int c3);
void getdata()
{
cout<<"The value of a is "<<a<<endl;
cout<<"The value of b is "<<b<<endl;
cout<<"The value of c is "<<c<<endl;
cout<<"The value of d is "<<d<<endl;
cout<<"The value of e is "<<e<<endl;

}

};
void Employee :: setdata(int a1, int b2, int c3){
a = a1;
b = b1;
c = c1;

}

int main(){
     Employee Harry;
     Harry.a = 56;
     Harry.b = 76;
     Harry.c = 88;
     Harry.d = 65;
     Harry.e= 90;
     Harry.setdata(1,2,4);
     Harry.getdata();

    return 0;
}
