#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() 
{
	srand(time(0));
	int dice;
	dice = (rand()%6)+1;
	cout<<"\nYou rolled a "<<dice;
	cout<<"."<<endl;
	
	if (dice == 3){
		cout<<"You are so dead!\n";
		for (int i = dice; i > 0; --i)
			cout<<"Dead in  "<< i<<endl;
			cout<<"Most Unlucky, You are ! *.* \n";
	}
	else
	cout<<"Alright, playa! Good luck! \n";
	
return 0;
	
}
