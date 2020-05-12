// Loubens Louis, Lab 23, Q1
#include <iostream>
using namespace std;

int main(){

string name;
cout<<"Enter your name: "<<endl;
cin>>name;
cout<<endl;

cout<<"The substring of that string variable"
    <<" that begins at position 1 is "<<name.substr(1);
cout<<endl;

return 0;

}