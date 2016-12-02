#include "myinclude.h"

int const N = 4;
const int M = 4;
const int K = 10;

int main()
{

	int arr[N][M];
	char randChar[K];
	char randChar2[K];
	char code[K][2];
	for (int i = 0; i < K; i++)
	{
		randChar[i] = 65 + rand() % 25;
		randChar2[i] = randChar[i];
		cout << randChar[i];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < 2; j++)
		{

		}
	}
	srand(time(0));
	cout << endl;
	RandArr(arr, N, M);

	ShowArr(arr, N, M);
	swaparr(arr, N, M);							//свапает по диагонали слева на право
	cout << "-----------" << endl;
	ShowArr(arr, N, M);
	
	


	_getch();
	return 0;
}