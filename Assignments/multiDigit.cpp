// multiDigit()
#include <iostream>
using namespace std;

void multiDigit(int n);
int num;

int main(){

	cout<<"Enter a 2 or more digit number: ";
	cin>>num;
	cout<<endl;

	multiDigit(num);

return 0;
}

void multiDigit(int n){

	if (num < 0) cout<<"Done.";
	else if (num == 0) return;
	else{
		multiDigit(num / 10);
		if (num % 2 != 0){
			cout<< num % 10;
			cout<< num % 10;

		}
	}
}
	