#include "myheader.h"


int main()
{
	char first[100];
	char second[10][10];
	int k = 0, n = 0, N = 0;
	bool flag = 0;
	cin >> first;

	
	for (int i = 0; i < 10; i++)
	{
		
		for (int j = 0; j < 10; j++)
		{
				if(first[k] == '\0')
				{
					second[i][j] = '\0';
				}
				else
				{
					second[i][j] = first[k];
				}
			
			k++;	
			
		}
		
		
	}
	

	_getch();
	return 0;
}	