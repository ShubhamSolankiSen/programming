#include <iostream>
using namespace std;

int main()
{
    int a = 7;
    int *b = &a;
    cout << "The value of a is " << *b << endl;

    // new keyword
    int *ptr = new int(45);
    cout << "the value of *ptr is " << *ptr << endl;

    return 0;
}