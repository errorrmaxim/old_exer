#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	int count,n, k = 0, z = 0;
	char m = 'M';
	
	cin >> count;
	n = count;
	system("cls");
	for (int i = 0; i <= count; i++)
	{
		n = n - (n - k++);
		for (int j = count; j >= 0; j--)
		{

			if (j > n)
			{
				cout << ' ';
			}
			else if(j <= n++)
			{
				cout << m;
			}
			
		}
		for (int k = 0; k < i; k++)
		{
			cout << m;
		}
		cout << endl;
	}
	


	_getch();
	return 0;
}