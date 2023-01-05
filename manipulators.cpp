#include<iostream>
using namespace std;

int main(){
    int a=45,b=67,c=56;
    cout<<"The value of without setw a is: "<<a<<endl;
    cout<<"The value of without setw b is: "<<b<<endl;
    cout<<"The value of without setw c is: "<<c<<endl;

    cout<<"The value of setw a is: "<<setw(4)<<a<<endl;
    cout<<"The value of setw b is: "<<setw(4)<<b<<endl;
    cout<<"The value of setw c is: "<<setw(4)<<c<<endl;


    return 0;
}