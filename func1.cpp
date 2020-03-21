#include <iostream>
using namespace std;

int main(){

  int GreatestNum(int a, int b); // prototype the function

  int a, b = 0;
  cout<<"Enter two numbers and enter after each: \n";
  cin>>a>>b;
  cout<<endl;

  cout<<"The greatest number is "<<GreatestNum(a,b)<<"."; // call func in main()
  cout<<endl;
  
return 0;
}

 int GreatestNum(int a, int b){ // define the function outside of main()
    if (a>b){
      return a;}
      else
      return b;
    }
