#include <iostream>
#include <string>
#include <cmath>
#include <conio.h>
#include <ctime>
#include <ctype.h>
using namespace std;



int main()
{
	int numrand;
	int num;
	string name;
	char yn;
	
	cout << "Please enter your name: ";
	cin >> name;
	cout << "Welcome to game " << name << endl;
	cout << " Do you want to play? (y/n) ";
	
	
	

	
	while (true)
	{
		cin >> yn;
		if (yn == 'n' || yn == 'N')
		{
			return 0;
		}
		else if (yn == 'y' || yn == 'Y')
		{
			srand(time(NULL));
			numrand = rand() % 6;
			cout << "Enter the number: ";
			cin >> num;
			if (num == numrand)
			{
				cout << "You win!" << endl;
			}
			else if (num == -1)
			{
				return 0;
			}
			else
			{
				cout << "You lose! Computer number is " << numrand << endl;
			}
			
		}
		else
		{
			cout << "Try again! ";
		}

	}
	_getch();
	return 0;

}