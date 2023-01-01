#include <iostream>
using namespace std;

int main()
{
    float number1, number2;
    float sum, average;
    cout << "Enter two numbers:" << endl;
    cin >> number1;
    cin >> number2;
    sum = number1 + number2;
    average = sum / 2;
    cout << "sum =" << sum << endl;
    cout << "average =" << average << endl;

    return 0;
}