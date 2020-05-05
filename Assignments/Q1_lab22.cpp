#include <iostream>
using namespace std;

int row = 0;
cout<<"Enter size of row: "<<endl;
cin>>row;
cout<<endl;

int rectangle(int row){

	for (int r = 0; r < row; r++){
		for (int c = 0; c <= 10 ; c++){
			if (r==c) cout<<"*";
	}
	cout<<endl;
	}
}