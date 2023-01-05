#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Tell me your age";
    cin>>age;

    if((age<18)&&(age>0)){
cout<<"you can not come to my party "<<endl;
    }

    else if(age==18){
        cout<<"Yor are a kid so you will get come to party "<<endl;
    }
    else if(age<1){
        cout<<"you are not yet born "<<endl;
    }

    else{
        cout<<"You can come to my party "<<endl;
    }
    return 0;
}