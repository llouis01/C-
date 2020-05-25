#include <iostream>
using namespace std;

int main(){ 

char a = 'A';
int x, y;
cout<<"Enter 2 values for x and y where x is"
    <<" greater than 3 and y greater than x: \n";

cin>>x>>y;

if (x <= 3 || y <= x){ 
	cout<<"Try again: \n";
	cin>>x>>y;
}

for (int r = 1; r < x; r++){
    for (int c = 1; c < x; c++){
	if (c == 1 && c == x) cout<<"A";
    if (r == 1 || r == x) cout<<"A";
	}
    }
cout<<endl;

return 0;
}