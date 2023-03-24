#include<iostream>
using namespace std;

class person
{
char name[30];
int age;
public:
void getdata();
void display();

};
void person::getdata()
{
    cout<<"Enter your name:"<<endl;
    cin>>name;
    cout<<"Enter your age:";
    cin>>age;
}
void person ::display()
{
cout<<" name :"<<name<<endl;
cout<<" age :"<<age<<endl;
}


int main(){
    person p;
    p.getdata();
    p.display();                    
    
    return 0;
}
