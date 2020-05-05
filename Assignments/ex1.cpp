//Loubens Louis, Q2

#include <iostream>
using namespace std;

int n, k, c = 0;

int fact(int x);

int perm(int n, int k);


int main(){

cout<<"Enter two numbers for permutation: \n";
cin>>n>>k;

cout<<"Permutation yields: "<<perm(n, k);
cout<<endl;

return 0;
}

int fact(int x){

	while (x > 0){
		if (x == 1){
			return 1;
		} else
			c = x*(x-1);
	}
return c;
}


int perm(int n, int k){

	return fact(n)/fact((n-k));
}
