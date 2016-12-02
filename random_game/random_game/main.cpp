#include <iostream>
#include <conio.h>


using namespace std;

struct d
{
	int key;
};
struct List
{
	d a;
	List *next;
};

void suka(List *p)
{
	List *suka = p;

	while (suka)
	{
		cout << suka->a.key << " -> ";
		suka = suka->next;
	}
	cout << "NULL \n";
}

int main()
{
	List *begin = NULL;
	List *p = begin;
	List *end ;
	int i;

	for (;;)
	{
		cin >> i;
		if (!i) break;

		p = new List;
		p->a.key = i;
		p->next = begin;
		begin = p;
	}


	while (p) {
		cout << p->a.key << ' ';
		p = p->next;
	}
	_getch();
	return 0;
}