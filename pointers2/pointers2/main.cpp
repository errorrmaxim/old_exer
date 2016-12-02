#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

int main()
{
	int n, m;
	srand(time(0));
	n = rand() % 10;
	m = rand() % 10;

	int **p = new int*[n];
	for (int i(0); i < n; i++)
	{
		p[i] = new int[m];
	}

	for (int i(0); i < n; i++)
	{
		for (int j(0); j < m; j++)
		{
			p[i][j] = rand() % 10;
		}
	}
	
	
	
	for (int i(0); i < n; i++)
	{
		for (int j(0); j < m; j++)
		{
			cout << p[i][j] << ' ';
		}
		cout << endl;
	}


	for(int i(0); i<n;i++)
	delete[] p[i];
	_getch();
	return 0;
}