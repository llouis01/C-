//Loubens Louis, Q2

#include <iostream>
using namespace std;

int n, k = 0;

int fact(int x);

int perm(int n, int k);


int main(){

cout<<"Enter two numbers for permutation: \n";
cin>>n>>k;
// cin>>k;

cout<<"Permutation yields: "<<perm(n, k);
cout<<endl;

return 0;
}

int fact(int x){

	while (x > 1){
		if (x == 1){
			return 1;
		} else
			return x*(x-1);
	}
}


int perm(int n, int k){

	return fact(n)/fact(n-k);
}
