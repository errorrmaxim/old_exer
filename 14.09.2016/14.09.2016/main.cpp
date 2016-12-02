#include <iostream>
#include <conio.h>

using namespace std;

void Show(int arr[], int N);
int main()
{
	int masiv[8] = { 3,7,1,2,5,15,24,6 };
	int tmp;
	
	Show(masiv, 8);
	cout << endl;
	for (int i = 0; i < 8; i++)
	{
		bool flag;
		for (int j = 0; j < 8; j++)
		{			
			if (masiv[j] > masiv[j + 1])
			{
				swap(masiv[j], masiv[j + 1]);
				flag = false;
			}
			else
			{
				flag = true;
			}
				
		}
		if (flag == true)
		{
			break;
		}
	}
	cout << endl;
	Show(masiv, 8);

	_getch();
	return 0;
}


void Show(int arr[], int N)
{

	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << ' ';
	}
}