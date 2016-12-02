#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;


int main()
{
	FILE* pF;
	
	char *a = "qweqweqwe";
	if ((pF = fopen("myfile.txt", "w")) == NULL)
	{
		cout << "lol";
		return 1;
	}
	else
	{
		cout << "kek";
		
		fputs(a, pF);
		fputc('e', pF);
	}
	_getch();

	return 0;
}