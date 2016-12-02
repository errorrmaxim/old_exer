/////////////////////////////
//						   //
//		  LISTS			   //
//						   //
/////////////////////////////
#include <iostream>
#include <conio.h>


using namespace std;

struct List
{
	int info;
	List *next;
};


List *Header = nullptr;

void Show_list();
void Init_to_begin();
void Init_to_end();
int main()
{
	setlocale(LC_ALL, "RUS");
	
	for (int i = 0; i < 5; i++)
		Init_to_end();
	
	Show_list();
	_getch();
	return 0;
}


void Show_list()
{
	
	List *pl;

	pl = Header;
	int i = 0;

	while (pl != NULL)
	{
		cout << (pl->info) << " -> ";
		pl = pl->next;
		i++;
	}
	cout << "В массиве " << i << " елементов";
}

void Init_to_begin()
{
	
		List *pl;
		pl = Header;
		for (int i = 0; i < 1; i++)
		{
			pl = new List;
			cin >> pl->info;
			pl->next = Header;
			Header = pl;
		}

}

void Init_to_end()
{
	List *pl, *plN;
	pl = Header->next;
	
		plN = new List;
		plN->next = NULL;
		cin >> plN->info;
		pl = new List;
		pl = Header;

		if (Header == NULL)
		{
			Header = plN;
		}
		else
		{
			while (pl->next != NULL)
			{
				pl = pl->next;
				pl->next = new List;
				pl = pl->next;
				cin >> pl->info;
				pl->next = NULL;
			}
			Header = pl;
		}

}

