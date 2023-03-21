#include <iostream>
using namespace std;

int main(){
    int decimal number , binary number = 0;
  int  i = 1;
    cout<<"Enter a decimal number:"<<endl;
    cin>>"decimal number";

    while (decimal number!=0)
    {
        binary number + =(decimal number%2)*i;

        decimal number / =2;
        i*=10;
    }
    cout<<"Binary Equivalent:"<<binary number<<endl;
    

    return 0;
} 