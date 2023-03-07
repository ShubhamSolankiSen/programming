#include <iostream>
using namespace std;

int main(){
    int n,first = 0, second = 1 ,next;
    cout<<"Enter the number of terms you want in the fibonacci series:"<<endl;
    cin>>n;

    cout<<"Fibonacci Series"<<endl;
    int i = 0;
    while(i<n){
        if(i<=1){
            next = i;

        }
    else{
        next = first+ second;
        first =  second;
        second = next;
    }
    cout<<next<<" ";
    i++;
    }
    return 0;
}