#include <iostream>
using namespace std;


int numberNegative(double (*arr)[3], int r, int c);

int main(){
	double data[2][3] = {{-3.0, 1, 4.5}, {-2.2, 7, 1.4}};
	cout<<numberNegative(data, 2, 3)<<endl;
	return 0;
}


int numberNegative(double (*arr)[3], int r, int c){
	
int counter = 0;
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			if (arr[i][j] < 0) 
				counter++;
		}
	}
	return counter; // can't be within loop
}
