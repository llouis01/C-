#include <iostream>
using namespace std;


int rectangle(int row){

	cout<<"**********";
	
	for (int r = 0; r < 10; r++){
		for (int c = 0; c < row; c++){
			cout<<rectangle(row);
	}
	cout<<endl;
	}
}


int main() {

int row = 0;
cout<<"Enter size of row: ";
cin>>row;
cout<<endl;

cout<<rectangle(row)<<endl;

return 0;
}