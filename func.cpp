#include <iostream>
using namespace std;

int SingHBD(string, int); // create prototype for fcn

int main()
{
	SingHBD("Sandy", 28); // call function
	cout<<"So glad that I got to sing for you. Bye now!\n";
	int real_age = SingHBD("Loubens", 29);
	cout<<real_age;
}

int SingHBD(string usrnme, int age) // create fcn instructions with parameter
{
	
	cout<<"Enter your name: \n";
	cin>>usrnme;
	cout<<"How old are you now: \n";
	cin>>age;
	cout<<"\nHappy Birthday to You!\n";
	cout<<"Happy Birthday to You!\n";
	cout<<"Happy Birthday to "<<usrnme<<"!\n";
	cout<<"Happy "<<age<<"th year to You!\n";
	cout<<"\nDo you feel old knowing that an 18 year-old today was born in 2002?\n";
	return age; // return age to main()
}

