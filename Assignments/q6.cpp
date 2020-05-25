#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


void printMyLotto();

int main(){

cout<<printMyLotto();

return 0;
}


void printMyLotto(){

	srand(time(0));
	int ball;
	
	for (int i = 1; i < 6; i++){
	ball = (rand()%59)+1;
		cout<<ball;
        }
}


