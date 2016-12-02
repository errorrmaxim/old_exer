#include <iostream>
#include <conio.h>
#include <ctime>

using namespace std;

const int N = 10;
const int M = 10;

int arr[N][M];

void Show();
void setloc();

int main()
{
	srand(time(0));
	setlocale(LC_ALL, "RUS");
	

	setloc();
	Show();


	_getch();
	return 0;
}


void setloc()
{
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}
void Show()
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

}