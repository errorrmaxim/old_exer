#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include <cstdio>


using namespace std;

int main()
{

	int var_int[10] = { 12,2,1,43,4,6,98,7,6,13 };
	double var_doub = 21.2;
	char m[10] = "chris";

	struct lol
	{
		char name[10];
		int age;
	};

	lol men;
	lol kek;
	men.age = 18;
	strcpy(men.name, m);
	FILE * fd = fopen("file.txt", "rb");
	//fwrite(&men, sizeof(men), 1, fd);
	//fwrite(&var_int, 4, 10, fd);
//	fwrite(&m, 1, 1, fd);

	fread(&kek, sizeof(kek), 1, fd);

	cout << "Age: " << kek.age << endl;
	cout << "Name: " << kek.name;
	
	//cout << n_out << endl << k_out << endl << c_out;

	_getch();
	return 0;
}