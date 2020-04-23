#include <iostream>
using namespace std;


int main(){

	int nums[4][4];
	
	bool found = false;
	for (int r = 0; r < 4;r++){
		for (int c = 0; c < 4; c++){
			cin>>nums[r][c];

	for (int r = 0; r < 4;r++){
		for (int c = 0; c < 4; c++){
			if (nums[r][c] == 50) found = true;