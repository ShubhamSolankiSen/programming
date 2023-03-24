#include<iostream>
using namespace std;

int main(){
    int i;
    for ( i = 1; i <= 10; i++)
    {
        cout<<i*8<<endl;
        i=i++;
    }
    return 0;
}
