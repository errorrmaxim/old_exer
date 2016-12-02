#include "myheadera.h"




int main()
{
	setlocale(LC_ALL, "RUS");
	
	int sol = INT_MAX, M;
	bool br = 0;
	int counter = 1; 
	phoneBook *NewContact;
	phoneBook *OldContact = new phoneBook[counter];
	while (sol != 0)
	{
		
		M = counter + 1;
		NewContact = new phoneBook[counter];//create new array "phoneBook" with \counter/ elements!!!!
		
		phone_menu();
		cin >> sol;
		system("cls");
		switch (sol)
		{
		case 1: add(OldContact); system("cls"); break;
		case 2: rename_contact(OldContact);break;
		case 9: system("cls"); Show(OldContact); break;
		case 0: br = 1; break;
		default:
			break;
		}
		if (br == 1)
		{
			break;
		}
		for (int i = 0; i < counter; i++)
		{
			NewContact[i] = OldContact[i];
		}
		delete[] OldContact;
		
		OldContact = NewContact;
		counter++;
		
	}
	//delete[] NewContact;



	_getch();
	return 0;
}