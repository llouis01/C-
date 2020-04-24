#include <iostream>
using namespace std;

void dropDimension(int arr1[][3], int r, int c, int arr2[]);

int main(){
	int x[100];
	int y[2][3] = {{3, 4, 5}, {1, 1, 9}};
	int yrows = 2, ycols = 3;
	dropDimension(y, yrows, ycols, x);
	cout<<endl;
	
	for (int i = 0; i < 100; i++){
		cout<<x[i]<<", ";
	}

return 0;

}


void dropDimension(int arr1[][3], int r, int c, int arr2[]){
	for (int i = 0; i <= (r+c); i++){
		for (int j = 0; j <= (r+c); j++){
		arr2[i] = arr1[i][j];
	}	
	}
}
