#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {

  double arrayAvg(int Arr[], int size);
  int largestNum(int Arr[], int size);

  srand(time(0));
  int Array[5];
  for (int i = 0; i < 5; i++){
    Array[i] = rand()%9+1; // I changed the range from 1 to 9 instead
  }

	cout<<"The elements assigned to array are: ";
  for (int a = 0; a < 5; a++){
    cout<<Array[a];
  }
  cout<<endl;

  cout<<"\nThe average of the elements"
      <<" in the array is "<<arrayAvg(Array, 5)
      <<"."<<endl;

  cout<<"\nThe largest element in the array"
      <<" is "<<largestNum(Array, 5)<<"."
      <<endl;

return 0;
}



  double arrayAvg(int Array[], int size){
	int sum = 0;	  
        for (int a = 0; a < 5; a++){
        sum += Array[a];
	}
	return (double)sum/size; // the return statement will do what the cout would have done.
}
	

  int largestNum(int Array[], int size){
	 int max = Array[0]; // first elm set to max then loop to compare each following to the current elm
    	 for (int a = 0; a < 5; a++){
		if(Array[a]>max) max = Array[a]; // continually place highest elm in max and compre to next elm
    }
	return max;
  }
