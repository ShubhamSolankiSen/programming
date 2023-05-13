#include <iostream>
using namespace std;

template<class D1,class D2>
class Students{
    public:
    int age;
    char name;
  Students ( D1 a , D2 b){
age = a;
name = b;

  }
 void display(){
    cout<<this->age<<endl<<this->name;
 }
};

int main(){
    Students < int , char > s(20, 's');
    s.display();
    return 0;
}
    