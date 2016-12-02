#include <iostream>
#include <conio.h>

using namespace std;

const int N = 10;
const int M = 10;
int main()
{
	setlocale(LC_ALL, "RUS");
	/*
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };							////// Менять элементы массива местами 
																	//////  и делать проверку на вводимое значение.
	int n, m, tmp1,tmp2;											//////  ЛОЛ=)
	for (int n = 0; n < 10; n++)						
	{
		cout << arr[n] << ' ';
	}
	cout << endl;
	while (!(cin >> m) || m > 9)
	{
		cout << "Ошибка ввода! Введите число от 0 до 9";
		cin.clear();
		while (cin.get() != '\n')
		{
			continue;
		}
	}
	while (!(cin >> n) || n > 9)
	{
		cout << "Ошибка ввода! Введите число от 0 до 9";
		cin.clear();
		while (cin.get() != '\n')
		{
			continue;
		}

	}
	

	for (int i = 0; i < 10; i++)
	{
		if (i == n)
		{
			tmp1 = arr[i];
			arr[i] = arr[m];
			arr[m] = tmp1;
		}

	}
	for(int j = 0; j < 10; j++)
	{
		cout << arr[j] << ' ';
	}*/

	//===============================================================================

	/*
	int arr1[N] = { 1,2,3,4,5,6,7,8,9,10 };
	int arr2[N],tmp;
	for (int i = 0, j = N - 1; i<j; i++, j--)										////////////////////
	{																				////////// Поменять элементы массива 
		tmp = arr1[i];																////////// задом на перед <-- / -->
		arr1[i] = arr1[j];															////////// LoL=)
		arr1[j] = tmp;																////////////////////
	}
	for (int j = 0; j < N; j++)
	{
		cout << "Элемент массива ARR1 " << arr1[j] << endl;
	}
	cout << "=============================" << endl;
	*/



	int arr[M], num, counter = 1, size = 1, index;
	

	for (int i = 0; i < M; i++)
	{
		while (!(cin >> arr[i]))
		{
			cout << "Ошибка ввода! Повторите ввод: ";
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
		}
	}

	for (int j = 0; j < M; j++)
	{
		if (arr[j] == arr[j + 1])
		{	
			counter++;
		}
		else
		{
			if (size < counter)
			{
				num = arr[j];
				index = j - (counter - 1);
				size = counter;
			}
			counter = 0;
		}
	}
	cout << "Количество подряд идущих символов " << size << endl;
	cout << "Индекс элемента начала " << index << endl;
	cout << "Число с самой длинной последовательностью " << num;
	_getch();
	return 0;
}