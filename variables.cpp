#include <iostream>
using namespace std;

int c=56;

int main()
{
    int a, b, c;
    c = a + b;
    cout << "Enter the value of a is: " << endl;
    cin >> a;
    cout << "Enter the value of b is: " << endl;
    cin >> b;
    cout<<"The sum is "<<(a+b)<<endl;
cout<<"The global c is "<<::c;
    return 0;
}