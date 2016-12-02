#include <iostream>
#include <conio.h>

using namespace std;

const int M = 10;


int max(int arr[], int N);
int min(int arr[], int N);

int main()
{
	int Array[M] = { 12,33,41,15,32,6,77,123,222,333 };

	cout << max(Array, M) << endl << min(Array,M);


	_getch();
	return 0;
}


int max(int arr[], int N)
{
	int max = INT_MIN;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	return max;
}

int min(int arr[], int N)
{
	int min = INT_MAX;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	return min;
}
