#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age:";
    cin>>age;
    
    switch(age)
    {
    case 2:
    cout<<"You are 2"<<endl;
        break;

        case 45:
         cout<<"You are 45"<<endl;
         break;

   case 5:
   cout<<"You are 5"<<endl;
   break;

    default:
      cout<<"no special cases";
        break;
    }
    cout<<"Done with switch case"<<endl;
    return 0;
}