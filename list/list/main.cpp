#include <iostream>
#include <conio.h>
#include <cmath>
#include <ctime>

using namespace std;

struct List
{
	int key;
	List *next;
};


int main()
{
	setlocale(LC_ALL, "RUS");
	
	int N;
	cout << "Введите количество элементов списка: ";
	cin >> N;
	int i = 0;
	List *MyList;
	List *begin = 0;
	int *arr = new int[N];
	

	do
	{
		cout << "Введите целое число: ";


		if (!(cin >> arr[i]))
		{
			cin.clear();
			cin.get();
			cout << "Ошибка ввода! ";
		}
		else
		{
			i++;
		}

	} while (i < N);
		
	

	for (auto i = 0; i < N; i++)
	{
		MyList = new List;
		MyList->key = arr[i];
		MyList->next = begin;
		begin = MyList;
	}
	system("cls");
	MyList = begin;
	for (auto i(0); i < N; i++)
	{
		cout << i+1 << " Значение списка -> " << MyList->key << endl;
		MyList = MyList->next;
	}
	
	for (auto i(0); i < N; i++)
	{
		MyList = begin;
		begin = begin->next;
		delete[] MyList;
	}

	_getch();
	return 0;
}