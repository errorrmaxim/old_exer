#include <iostream>
#include <conio.h>


using namespace std;

char player1[50];
char player2[50];
char field[3][3];
bool step;

void instruct()
{
	cout << "tic-tac-toe " << endl;
	int l = 48;
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1;j<= 3; j++)
		{
			field[i][j] = l+1;
			cout << field[i][j] << '|';
			l++;
		}
		cout << endl;
	}
}
bool inp()
{
	
	system("cls");
	int n;
	int l = 48;
	for (int i = 1; i <= 3; i++)
	{
		for (int j = 1; j <= 3; j++)
		{
			field[i][j] = l + 1;
			cout << '|' << field[i][j] ;
			l++;
		}
		cout << '|';
		cout << endl;
	}
	cout << endl;
	if (step)
	{
		cout << "Your step " << player1 << ": ";
		cout << "Your step " << player2 << ": ";
	}
	cin >> n;
	if (n < 1 || n>9)
	{
		return false;
	}
	
	int i, j;
		if (n % 3 == 0)
		{
			i = n / 3 - 1;
			j = 2;
		}
		else
		{
			j = n % 3 - 1;
			i = n/3;
		}
			if (field[i][j] == 'O' || field[i][j] == 'X')
			{
				return false;
			}
			if (step)
			{
				field[i][j] = 'X';
				step = false;
			}
			else
			{
				field[i][j] = 'O';
				step = true;
				return true;
			}
		
	

}
bool win()
{
	for (int i = 0; i < 3; i++)
	{
		
			if ((field[i][0] == field[i][1]) && (field[i][1] == field[i][2]))
				return true;
			else if ((field[0][i] == field[1][i]) && (field[1][i] == field[2][i]))
				return true;
			else if (((field[0][0] == field[1][1]) && (field[1][1] == field[2][2])) || ((field[0][2] == field[1][1]) && (field[1][1] == field[2][1])))
				return true;

	}
	
}
int main()
{
	cout << "Enter player name 1: ";
	cin >> player1;
	cout << "Enter player name 2: ";
	cin >> player2;
	
	instruct();
	inp();
	_getch();
	return 0;
}