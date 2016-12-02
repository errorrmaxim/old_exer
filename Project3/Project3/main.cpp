#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;


int main()
{
	int a, b, c, n;
	srand(time(0));
	a = rand() % 10 + 1;
	b = rand() % 10 + 1;

	cout << "Enter the answer: " << endl;
	cout << a << " * " << b << " = ";

	c = a * b;
	cin >> n;

	(c == n) ? cout << "Answer " << n << " is correctly!" : cout << "Answer " << n << " is not correct!" << " Answer is " << c;
	
	_getch();
	return 0;
}