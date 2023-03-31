#include <iostream>
using namespace std;

int main(){
    string str;

    cout<<"Enter a  string :"<<endl;
    getline(cin,str);
    
    int length = str.length();
    bool is polindrome = true;

for (int i =0; i<length(2;i++){
    if(str [i] ! =  str [length -1-i]){
        is polindrome = false;
        break;
    } 
}
  if(is polindrome){
    cout<<"The string is a polindrome";
  }
       else{
        cout<<"The string is not a polindrome";
        
       }
    return 0;
}