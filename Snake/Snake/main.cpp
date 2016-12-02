#include <iostream>
#include <conio.h>

using namespace std;

const int rows = 24, elements = 78;
char field[rows][elements];
char c = '@', c1;
int pos_elem = 0, pos_rows = 0;

void gameplace()
{
	
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < elements; j++)
		{
			field[i][j] = '.';
		}
	}
}

void show()
{

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < elements; j++)
		{
			cout << field[i][j];
		}
		cout << endl;
	}
}

void move_right()
{
	do 
	{
		c1 = (char)_getch;
		system("cls");

		if (c1 == 'd' || c1 == 'D') 
		{
			for (int i = 0; i < rows; i++)
			{
				for (int j = 0; j <= pos_elem; j++)

					if (j != pos_elem)
						field[i][j] = ' ';
					else
						field[i][j] = c;
				field[pos_rows][pos_elem + 1] = '\0';
				pos_elem++;


			}
		}
		cout << field;
	} while (c1 != 'q');

}


int main()
{
	gameplace();
	move_right();



	_getch();
	return 0;
}