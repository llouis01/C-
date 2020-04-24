#include <iostream>
using namespace std;


void halfs(double (*arr)[2], int r, int c); // include type dbl in front of (*arr)

int main(){

	double data[2][2] = {{1, 2}, {3, 4}};
	halfs (data, 2, 2);
	for (int i = 0; i < 2; i++){
		cout << data[1][i] << " "; // prints 1.5 2.0
	}

return 0;
}

void halfs(double (*arr)[2], int r, int c){
	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			arr[i][j] = arr[i][j] / 2;
		}
	}
}
