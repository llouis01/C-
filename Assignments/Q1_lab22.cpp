#include <iostream>
using namespace std;


int print(){

	cout<<"**********";
	}

int rectangle(int row){

	for (int r = 0; r < 10; r++){
		for (int c = 0; c < row ; c++){
			if (r<=c || r>=c) cout<<print();
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