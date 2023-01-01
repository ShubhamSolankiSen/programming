#include<iostream>
using namespace std;

class BCA
{
    int a;
    public:
    void getdata();
    void display();
};
    
void BCA::getdata(){
    a=55;
}
void BCA::display(){
    cout<<a;
}

int main(){
    BCA B1;
    B1.getdata();
    B1.display();
    
    return 0;
}