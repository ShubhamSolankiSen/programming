#include <iostream>
using namespace std;
int add ();
int main ()
{
    int p;
     p = add ();
    cout<<p;
    return 0;
} 
int add (int a,int b) {
    a=5;
b=6;
return (a+b);
}