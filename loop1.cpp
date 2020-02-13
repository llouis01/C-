// playing with if and else statements in C++.

#include <iostream>
using namespace std;

int main() 
{
	int x = 0;
	cout<<"Ent an int: "<<endl;
	cin >> x;

	if (x < 17) {
	cout<<"Make it higher.."<<endl;
	} else if (x > 17) {
	cout<<"Make it lower.."<<endl;
	} else if (x == 17) {
	cout<<"Jackpot!"<<endl;
	}

return 0;
}
