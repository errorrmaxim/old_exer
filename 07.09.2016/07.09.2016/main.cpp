#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;
const int N = 10;
int main()
{
	setlocale(LC_ALL, "RUS");
	int tmp1 = INT_MIN, tmp2 = INT_MAX;
	int arr[N];
	srand(time(0));
	for (int j = 0; j < N; j++)
	{
		
		arr[j] = rand() % 10 + 1;
	}
	for (int k = 0; k < N; k++)
	{
		cout << arr[k] << ' ';
	}
	cout << endl;
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > tmp1)
		{
			tmp1 = arr[i];
		}
		if (arr[i] < tmp2)
		{
			tmp2 = arr[i];
		}
	}
	cout << "MAX -> " << tmp1 << endl << "MIN -> " << tmp2;
	_getch();
	return 0;
}