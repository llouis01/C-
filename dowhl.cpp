#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()

{
	string usr_input;
	int dice = 0;
	cout<<"Do you want to play? Enter YES or NO: ";
	cin>> usr_input;
	
	do {
		cout<<"Roll a dice:  ";
		dice = (rand()% 6) + 1;
		cout<< dice<<endl;
			if (dice == 3){
				cout<<"You must be very unlucky!";
				break;
			}
	}while (usr_input == "YES");
return 0;
}
//death game with street rollers
