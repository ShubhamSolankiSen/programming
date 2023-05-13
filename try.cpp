#include <iostream>
using namespace std;

int sum(int a , int b);

int main(){
int a , b;

cout<<"Enter the value of a: "<<endl;
cin>>a;

cout<<"Enter the value of b : " <<endl;
cin>>b;

cout<<"The sum is " <<sum(a,b)<<endl;

    return 0;

int sum(int a , int b) {
    int c = a + b;
    return c;
}
}