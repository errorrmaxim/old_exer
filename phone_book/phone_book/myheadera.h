#pragma once
#include <iostream>
#include <conio.h>
#include "struct.cpp"

using namespace std;

int counter = 0;
void phone_menu()
{
	cout << "What do you want to do to the phonebook? " << endl;
	cout << "#1. Add new contact \n";
	cout << "#2. Change contact \n";
	cout << "#8. Remove contact \n\n\n\n";
	cout << "#9. Print all contacts \n";
	cout << "#0. Exit \n";
	cout << "Enter number: ";

}

void inp(phoneBook m)
{
	cout << counter + 1 << " contact: " << endl;
	cout << "Enter the name: "; cin >> m.fname;
	cout << "Enter the number: "; cin >> m.phonenum;
	
}

void add(phoneBook m[])
{
	
		cout << counter + 1 << " contact: " << endl;
		cout << "Enter the name: "; cin >> m[counter].fname;
		cout << "Enter the number: "; cin >> m[counter].phonenum;
		
		_getch();	
	counter++;
}

void Show(phoneBook m[])
{
	for (int i = 0; i < counter; i++)
	{
		cout << i + 1 << ". Contact: " << endl;
		cout << " Name: " << m[i].fname << endl;
		cout << " Phone number: " << m[i].phonenum << endl;
	}
	_getch();
	system("cls");
}

void Show_rename(phoneBook m[])
{
	for (int i = 0; i < counter; i++)
	{
		cout << i + 1 << ". Contact: " << endl;
		cout << " Name: " << m[i].fname << endl;
		cout << " Phone number: " << m[i].phonenum << endl;
	}
	
}

void rename_contact(phoneBook m[])
{
	phoneBook n;
	int k;
	Show_rename(m);
	
	cout << "Enter the name of contact for rename: ";
	cin >> n.fname;
	for (int i = 0; i < counter; i++)
	{
		if (strcmp(m[i].fname, n.fname) == 0)
		{
			cout << "Rename contact number " << i + 1  << endl;
			cout << "Enter new name: "; cin >> m[i - 1].fname;
			cout << "Enter mew number: "; cin >> m[i - 1].phonenum;
		}

	}
	
		
		
	
	_getch();
	system("cls");
}

