#include<iostream>
#include<stack>
using namespace std;

int main(){
    
    stack<int>ms;
    ms.push(7);
    ms.push(9);
    ms.push(4);
    ms.push(5);

   while(!ms.empty())
   {
    cout<<ms.top()<<endl;
    ms.pop();
   }
    return 0;
}