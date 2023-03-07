#include <iostream>
using namespace std;

int main()
{
    // initalizes variables
    int a = 5;
    int b = 10;
    //    print the original values
    cout << "Before swapping:" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    // swap the values
    int temp = a;
    a = b;
    b = temp;
    // print the swapped values
    cout << "After swapping:" << endl;
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    return 0;
}