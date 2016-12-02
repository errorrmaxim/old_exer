#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;
const int N = 20;
int x, y;
int matrix[N][N];
char out;

void createfield()
{
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			matrix[i][j] = 0;
		}
	}
}
void Show()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << matrix[i][j] << "  ";
			
		}
		cout << endl;
	}
}

void Setmine()
{
	
	int s = 0;
	while (s < 10)
	{
		int x = rand() % 20;
		int y = rand() % 20;
		if (matrix[x][y] != 1)
		{
			s++;
			matrix[x][y] = 1;
		}

	}
	
}

void set_min_ground()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (matrix[i][j] == 1)
			{
				matrix[i - 1][j-1] = 2;
				matrix[i - 1][j+1] = 2;
				matrix[i - 1][j] = 2;
				matrix[i + 1][j+1] = 2;
				matrix[i + 1][j-1] = 2;
				matrix[i + 1][j] = 2;
				matrix[i][j - 1] = 2;
				matrix[i][j + 1] = 2;

			}
		}
		
	}
}

void checkfield(int x,int y)
{
	if (matrix[x][y] == 1)
	{
		cout << "You are lose! GAME OVER!";
	 }
	else if (matrix[x][y] == 2)
	{
		cout << "So closed, be careful!";
	}
	else
	{
		cout << "Good job!";
	}
}

void check_values(int x, int y)
{
	while (!(cin >> x) || !(cin >> y))
	{
		cin.clear();
		while (cin.get() != '\n');
		cout << " Incorect values, try again!";
		
	}
}

int main()
{
	srand(time(NULL));
	createfield();
	Setmine();
	set_min_ground();
	Show();
	while (true)
	{
		cout << "Please, enter the coordinates of mines! " << endl;
		check_values(x, y);
		checkfield(x, y);
		cout << "Do you want continuous?  y/n" <<endl;
		cin >> out;
		if (out == 'n' || out == 'N')
		{
			return 0;
		}
		
	}
	
	_getch();
	return 0;
}