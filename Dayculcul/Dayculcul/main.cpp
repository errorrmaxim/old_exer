#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;
/*
	int n,k=0,z=0;
	char i;
	for (;;k++)
	{

		cin >> i;
		if (i != '0' && i != '1')
		{
			break;
		}
		if (i == '0')
		{
			n = 0;
		}
		if (i == '1')
		{
			n = 1;
		}

		z += n * pow(2, k);
		cout << "k-pow = " << k << " z = " << z << endl;
		cout << z;
	}*/
int main()
{	
	char ch;
	int i = 0;
	cin >> ch;
	while (ch != 'x')
	{
		
		if (ch == '1')
		{
			i = i * 2 + 1;
		}
		else
		{
			i = i * 2;
		}
		cin >> ch;
	}
	cout << i;
	_getch();
	return 0;
}