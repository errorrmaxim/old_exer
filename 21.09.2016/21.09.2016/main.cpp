#include "myheader.h"


int main()
{
	char arr[20],arr2[20];
	setlocale(LC_ALL, "RUS");
	cout << "������� ������ 1: ";
	gets_s(arr);
	cout << "������� ������ 2: ";
	gets_s(arr2);
	
	int count = 0;
	char tmp;
	while (arr[count] != '\0' && arr2[count] != '\0')
	{
		count++;
		
	}
	
	for (int i = 0; i < count; i++)
	{
		
		if (arr2[i] > arr[i] || arr[i + 1] == '\0')
		{
			cout << "������ " << arr << " ������!";
			break;
		}
		if (arr2[i] < arr[i] || arr2[i + 1] == '\0')
		{
			cout << "������ " << arr2 << " ������!";	
			break;
		}
		else
		{
			continue;
		}
		
		
	}
	
	_getch();
	return 0;
}