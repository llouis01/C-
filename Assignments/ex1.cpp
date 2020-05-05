//Loubens Louis, Q2

#include <iostream>
using namespace std;

int fact(x);

int perm(int n, int k);

int n, k = 0;

int main(){

cout<<"Enter two numbers for permutation: \n";
cin>>n,k;

cout<<"Permutation yields: "<<perm(n, k);
cout<<endl;

return 0;
}

int fact(int x){

	if (x == 1){
		return 1;
	else
		return x*(x-1);
	}
}


int perm(int n, int k){

	fact(n)/fact(n-k);
}
