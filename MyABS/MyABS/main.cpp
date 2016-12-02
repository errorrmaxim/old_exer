#include <iostream>
#include <conio.h>

using namespace std;

//свап ф-ция
template <typename X> 
void MySwap(X &a, X &b)
{
	X temp;
	temp = a;
	a = b;
	b = temp;
}
//возвращает абсолютное значение числа
int MyABS(int &x)
{
	if (x >= 0)
	{
		return x;
	}
	else
	{
		return x * -1;
	}
}

template <typename X>
void Mysort(X *arr, int num)
{
	for (int i = 0; i < num - 1; i++)
	{
		for (int j = 0; j < num - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				MySwap(arr[j], arr[j + 1]);	
			}
			
		}
	}
}


int main()
{
	
	int lol[] = { 1,321,321,432,453,767,46,34,1,4,6,7,5,6,4, };

	for (int i = 0; i < 15; i++)
	{
		cout << lol[i] << ' ';
	}
	cout << endl;
	Mysort(lol, 15);

	for (int i = 0; i < 15; i++)
	{
		cout << lol[i] << ' ';
	}
	_getch();
	return 0;
}



