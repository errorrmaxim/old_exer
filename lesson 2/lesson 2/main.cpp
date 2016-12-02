#include <iostream>
#include <conio.h>

using namespace std;

void crypt();


int main()
{


	crypt();


	_getch();
	return 0;
}



void crypt()
{

	char signs[25];
	int j = 97;
	for (int i = 0; i < 25, j < 122; i++, j++)
	{
		signs[i] = j;
	}

	cout << signs;
}