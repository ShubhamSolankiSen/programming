#include<iostream>
using namespace std;

class sample{
    int a;
    public:
 sample(){
    a=6;
}
void display(){
    cout<<a<<endl;
}
};
int main(){
  sample s1;
  
  s1.display();
      return 0;
}