// code to calculate average of three courses
#include <iostream>
using namespace std;

int main()

{
	double score1 = 0, score2 = 0, score3 = 0;
	cout<<"Enter your scores and press enter after each one: \n";
	cin>>score1>>score2>>score3;

	while (score1 < 0 || score1 >100)
	{
	cout<<"\nTry a score above 0 and under 100 for your first test: \n";
	cin>>score1;
	}
	while (score2 < 0 || score2 >100)
	{
	cout<<"\nTry a score above 0 and under 100 for your second test: \n";
	cin>>score2;
	}
	while (score3 < 0 || score3 >100)
	{
	cout<<"\nTry a score above 0 and under 100 for your third test: \n";
	cin>>score3;
	}

	double score_avr = (score1 + score2 + score3)/3;

	if (score_avr >= 90)
	{
	cout<<"\nYour course grade is 'A'.\n";
    }
	else if (score_avr >= 80 && score_avr < 90)
	{
	cout<<"\nYour course grade is 'B'.\n";
    }
	else if (score_avr >= 70 && score_avr < 80)
	{
	cout<<"\nYour course grade is 'C'.\n";
    }
	else if (score_avr >= 50 && score_avr < 70)
	{
	cout<<"\nYour course grade is 'D'.\n";
    }
	else if (score_avr < 50)
	{
	cout<<"\nYour course grade is 'F'.\n";
    }
return 0;
}
