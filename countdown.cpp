// printing out numbers from 1 to user input
#include <iostream>
using namespace std;

int main() {

  int num = 0;
  cout<<"Enter a number less than 100: \n";
  cin>>num;

  while (num < 0 || num > 100) {
    cout<<"Follow instructions! A number less than 100: \n";
    cin>>num;
  }

    if (num % 2 == 0) {
      cout<<"Even number. Goodbye!\n";exit(0);
    }
    cout<<endl;
    for (int c = 1; c <= num; c++) {
	     cout<<c<<endl;}

return 0;
}
