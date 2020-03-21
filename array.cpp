#include <iostream>
using namespace std;

int main() {

  int grades[5] = {71, 89, 93, 79, 79};// array starts at 0
  	for (int gd = 0; gd < 5; gd++){
  		cout<<grades[gd]<<endl;
  }
  
  grades[2] = 100;
  cout<<"\nThe new grade for index 2 is "<<grades[2];
  
  cout<<"\nEnter a new grade for index 4: \n";
  cin>>grades[4];
  cout<<"\nThe new grade for index 4 is "<<grades[4];
  
  cout<<"\nFinally, the new grades are: \n";
  for (int gd2 = 0; gd2 < 5; gd2++){
  		cout<<grades[gd2]<<endl;
  }

return 0;
}
