#include "myheader.h"

int main()
{
	/*
	char str1[] = "22222222";
	char str2[] = "1111111111111";

	int st1 = strlen(str1);
	int st2 = strlen(str2);
	int size = st1 + st2;
	int k = 0, j = 0;
	char *stroka = new char[size];
	
	for (int i = 0; i < size; i++)
	{
		if (str1[k] != '\0' && i % 2)
		{
			stroka[i] = str1[k];
			k++;
		}
		else if (str2[j] != '\0')
		{
			stroka[i] = str2[j];
			j++;
		}
		if (str1[k] == '\0' || str2[j] == '\0')
		{
			continue;
		}
	}
	for (int i = 0; i < size; i++)
	{
		cout << *(stroka + i);
		
	}
	*/
	setlocale(LC_ALL, "RUS");
	int A[] = { 1,22,33,44,55,66,77 };
	int size = (sizeof(A) / sizeof(A[0]));
	int val, M;
	int *pOld = new int[size];
	int *pNew;
	bool flag;
	int gg;
	for (int i = 0; i < size; i++)
	{
		pOld[i] = A[i];
	}
	cout << "¬ведите значение: ";
	cin >> val;
	do
	{
		M = size + 1;
		pNew = new int[M];
		flag = 0;
		
		for (int i = 0, j = 0; i < M - 1; i++, j++)
		{

			if (pOld[i] < val || flag)
			{

				pNew[j] = pOld[i];
			}
			else
			{
				pNew[j] = val;

				i--;
				flag = 1;
			}
		}
		
		delete[] pOld;

		
		for (int j = 0; j < M; j++)
		{
			cout << pNew[j] << ' ';
		}
		pOld = pNew;
		size++;
		
		cin >> val;
	} while (true);

	_getch();
	return 0;
}
