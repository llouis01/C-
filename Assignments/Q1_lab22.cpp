#include <iostream>
using namespace std;

int rectangle(int row){

	for (int r = 0; r < row; r++){
		for (int c = 0; c <= 10 ; c++){
			if (r==c || r<=c || r>=c) cout<<"*";
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

