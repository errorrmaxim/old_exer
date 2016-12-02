#pragma once
#include <iostream>
#include <conio.h>
#include <cmath>
#include <ctime>

using namespace std;


void ShowArray(int arr[], int N)
{
	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << ' ';
	}
}

void randArr(int arr[], int N, int till = 10)
{
	srand(time(0));
	for (int i = 0; i < N; i++)
	{
		 arr[i] = rand() % till;
	}
}

void boublesort(int arr[], int N)
{
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < N - 1; j++)
		{
			if (arr[j + 1] < arr[j])
			{
				swap(arr[j + 1], arr[j]);
			}
		}
	}
}

void insertionSort(int arrayPtr[], int N) 
{
	int temp, item;
	for (int counter = 1; counter < N; counter++)
	{
		temp = arrayPtr[counter]; 
		item = counter - 1; 
		while (item >= 0 && arrayPtr[item] > temp) 
		{
			arrayPtr[item + 1] = arrayPtr[item];
			arrayPtr[item] = temp;
			item--;
		}
	}
}

void copyArr(int arr1[],int arr2[], int N)
{
	for (int i = 0; i < N; i++)
	{
		arr2[i] = arr1[i];
	}
}