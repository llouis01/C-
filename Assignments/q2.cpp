// Loubens Louis, Lab 24, xtra credit
#include <iostream>
using namespace std;

int main(){

string str1 = "The animal is a/an ";
string str2;

cout<<"Enter an animal name at least 5-letter long: ";
cin>>str2;

while (str2.length() < 5){
	cout<<"\nAt LEAST, 5 letters long: ";
	cin>>str2;
}

cout<<endl<<str2.insert(0,str1)<<"!"<<endl;

return 0;

}