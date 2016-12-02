#include "myinclude.h"
//void show(int *a, int *b);
//void swaap(int *a, int *b);
void StrOut(char **p, int N);

int main()
{
	//setlocale(LC_ALL, "RUS");
	char A1[] = "lologo";
	char A2[] = "dsfdsga";
	char A3[] = "qweew";
	char A4[] = "utrrtyu";
	char A5[] = "khgj";

	char *pArray[5] = {A1,A2,A3,A4,A5};

	//cout << *pArray[2];

	StrOut(pArray, 5);
	
	

	_getch();
	return 0;
}
/*
void show( int *a, int *b)
{
	int count = b - a;
	for (int i = 0; i <= count; i++)
	{
		cout << *a << endl;
		a++;
	}
	cout << "Количество элементов в массиве " << count+1;
}
void swaap(int *a, int *b)
{
	int count = b - a;
	for (int i = 0; i <= count/2; i++)
	{
		swap(*a, *b);
		a++;
		b--;
	}

}*/

void StrOut(char **p, int N)
{
	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < N; i++)
		{
			cout << p[j][i];
		}
		cout << endl;
	}
	
	
}