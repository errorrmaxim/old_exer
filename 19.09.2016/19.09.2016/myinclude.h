#pragma once
#include <iostream>
#include <conio.h>
#include <ctime>
#include <cmath>

using namespace std;
void ShowArray(int arr[][5], int N, int M)
{
	srand(time(0));
	int sum = 0, ololo = 0;
	int min = INT_MAX;
	int max = INT_MIN;
	int k1, k2, k3, k4;
	for (int i = 0; i < N; i++)
	{

		sum = 0;
		for (int j = 0; j < M; j++)
		{
			arr[i][j] = rand() % 10;
			cout << arr[i][j] << ' ';
			sum += arr[i][j];
			ololo += arr[i][j];
			if (arr[i][j] < min)
			{
				min = arr[i][j];

				k1 = i + 1;
				k2 = j + 1;
			}
			if (arr[i][j] > max)
			{
				max = arr[i][j];
				k3 = i + 1;
				k4 = j + 1;
			}
		}
		cout << " = " << sum << endl;

	}
	cout << "Sum of array " << ololo << endl;
	cout << "Min " << min << " String " << k1 << " Elem " << k2 << endl;
	cout << "Max " << max << " String " << k3 << " Elem " << k4 << endl;

}
int minimum(int arr[][5], int N, int M)
{
	int min = arr[0][0];
	for (int i = 0; i < N - 1; i++)
	{
		
		for (int j = 0; j < M - 1; j++)
		{
			if (arr[i][j] < min)
			{
				min = arr[i][j];
			}
		}	
	}
	return min;
}
int maximum(int arr[][5], int N, int M)
{
	int max = arr[0][0];
	for (int i = 0; i < N - 1; i++)
	{

		for (int j = 0; j < M - 1; j++)
		{
			if (arr[i][j] > max)
			{
				max = arr[i][j];
			}
		}
	}
	return max;
}
void RandArr(int arr[][4], int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			arr[i][j] = rand() % 10;
		}
	}
}
void ShowArr(int arr[][4], int N, int M)
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
void swaparr(int arrr[][4], int N, int M)			// по диагонали
{
	
	for (int i = 0; i < N; i++)
	{		
		for (int j = 0; j < N - i; j++)
		{
			swap(arrr[i][j], arrr[N - j - 1][N - i - 1]);

		}		
	}
	
}

