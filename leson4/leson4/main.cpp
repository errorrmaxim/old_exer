#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

double pow(double a, unsigned long long int c, int b)
{
	c = a * pow(a, b - 1);
	return c;
}

int main()
{
	double a, b, c;
	char lol;
	string stop;
	cout << "Enter the value a & b and choose operation (+, -, /, *, ^) " << endl;
	do
	{
		if (!(cin >> a >> lol >> b))
		{
			cout << "NaN" << endl;
			_getch();
			return -1;
		}
		else
		{
			switch (lol)
			{
			case '+':
				c = a + b;
				break;
			case '-':
				c = a - b;
				break;
			case '/':
				c = a / b;
				break;
			case '*':
				c = a * b;
				break;
			case '^':
				c = pow(a, b);
			default:
				break;
			}

			cout << a << lol << b << " = " << c << endl;

		}
	} while (true);
	
		
	_getch();
	return 0;
}