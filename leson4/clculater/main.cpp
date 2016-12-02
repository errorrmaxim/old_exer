#include <iostream>
#include <conio.h>
#include <cmath>

using namespace std;

int main()
{
	double a, b, c;
	char lol;
	cin >> a >> lol >> b;

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
		c =  a * b;
		break;
	default:
		break;
	}
	
	cout << a << lol << b << " = " << c;


	_getch();
	return 0;
}