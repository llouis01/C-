#include <iostream>
#inlcude <cstdlib>
#include <ctime>
using namespace std;

srand(time(0));
int num[100];
int unique[100];
int count 0;

for (int i = 0; i < 100; i++){
	num[i] = rand()%90+10;
	}

cout<<num