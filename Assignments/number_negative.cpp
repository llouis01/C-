#include <iostream>
using namespace std;


int numberNegative(int arr[], int r, int c);
int counter = 0;

int main(){
	double data[2][3] = {{-3.0, 1, 4.5}, {-2.2, 7, 1.4}};
	cout<<numberNegative(data, 2, 3)<<endl;
	return 0;
}


int numberNegative(int arr[], int r, int c){
	for (int i = 0; i < (r+c); i++){
		for (int j = 0; j <= (r+c); j++){
			if (i < 0) counter++;
			if (j < 0) counter++;
		}
		return counter;
	}
}