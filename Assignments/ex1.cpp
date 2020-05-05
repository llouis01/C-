//Loubens Louis, Q2

#include <iostream>
using namespace std;

int n, k= 0;

int fact(int x){

	while (x > 1){
		if (x == 1){
		return 1;
		} else
		return x * fact(x-1);
	}
}


int perm(int n, int k){

	return fact(n) / fact((n-k));
}


int main(){

cout<<"Enter two numbers for permutation: \n";
cin>>n>>k;

cout<<"Permutation yields: "<<perm(n, k); // n=5 & k=2 should yield 20
cout<<endl;

return 0;
}