#include <iostream>
#include <cmath>
using namespace std;

int main() {

  int a, b, c;
  cout<<"Enter three numbers: \n";
  cin>>a>>b>>c;

  int d = ((b*b) - (4*a*c));
  	if (a==0 || d <0){
    	cout<<"No roots."<<endl;return 0;}

  int r1 = (-b+sqrt(d))/(2*a);
  int r2 = (-b-sqrt(d))/(2*a);
  cout<<"\nRoots are "<<r1<<" and "<<r2<<"."<<endl;
  return 0;
}
