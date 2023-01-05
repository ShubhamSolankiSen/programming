#include<iostream>
using namespace std;

struct Employee
{
    int eId;
    float salary;
    char favchar;
};

int main(){
    struct Employee shubham;
    
    shubham.eId=1;
    shubham.salary=120000000;
    shubham.favchar='c';

    cout<<"The value is Employee.eID "<<shubham.eId<<endl;
    cout<<"The value is Employee.favchar "<<shubham.favchar<<endl;
    cout<<"The value is Employee.salary "<<shubham.salary<<endl;

    
    return 0;
}