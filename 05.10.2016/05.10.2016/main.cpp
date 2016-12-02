#include <iostream>
#include <conio.h>

using namespace std;

int& INC(int a)
{
	return a + 1;
}
int& DEC(int a)
{
	return a - 2;
}
int main()
{
	int A = 10;
	int(*ph)(int);
	int(*pp)(int);
	ph = INC;
	pp = DEC;
	cout << ph(A) << endl;
	cout << pp(A) << endl;

	_getch();
	return 0;
}