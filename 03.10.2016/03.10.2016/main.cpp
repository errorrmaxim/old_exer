#include "Header.h"
const int N = 4;

struct Contacts
{
	char Name[20];
	char num1[15];
	char num2[15];
};
void menu()
{
	cout << "1.Ввести новый контакт" << endl;
	cout << "2.Вывести контакты" << endl;
	cout << "3.Изменить текущий контакт" << endl;
	cout << "4.Выход" << endl;
}
void Show(Contacts *m, int counter)
{
	system("cls");//очистка экрана
	for (int i = 0; i < counter; i++)
	{
		cout << i + 1 << " Контакт:" << endl;//Номер выводимого контакта (id)
		cout << "Имя: " << m[i].Name << endl;//Имя итей хуйни
		cout << "Введите домашний номер: " << m[i].num1 << endl;//номер 1 итей хуйни
		cout << "Введите мобильный номер: " << m[i].num2 << endl;//номер 2 итей хуйни
	}
	_getch();//тормознем вывод и посмотрим чё у нам

}
void UpDate(Contacts *m, int counter)
{
	int num_contact, answ;
	system("cls");
	Show(m, counter);
	cout << endl << "Введите номер контакта: "; cin >> num_contact;
	//_getch();
	for (int i = 0; i < counter; i++)
	{
		if (i == num_contact - 1)
		{
			cout << "Введите имя " << i + 1 << " контакта: ";
			cin >> m[i].Name;
			cout << "Введите домашний номер: ";
			cin >> m[i].num1;
			cout << "Введите мобильный номер: ";
			cin >> m[i].num2;
			break;
		}
	}
	system("cls");
			menu();
			cin >> answ;
			switch (answ)
			{
			case 1:  break;
			case 2: Show(m, counter); break;
			case 3: UpDate(m, counter); break;
			case 4: break;
			}
}
void Input(Contacts *m,int counter)
{
	bool flag = 0, kek = 0;
	int answ;
	for (int i = 0; i < N; i++)
	{
		if (flag)
		{
			system("cls");
			menu();
			cin >> answ;
			switch (answ)
			{
			case 1: continue;  break;
			case 2: Show(m, counter); break;
			case 3: UpDate(m, counter); break;
			case 4: break;
			}
		}
		
		counter++;
		cout << "Введите имя " << i + 1 << " контакта: ";
		cin >> m[i].Name;
		cout << "Введите домашний номер: ";
		cin >> m[i].num1;
		cout << "Введите мобильный номер: ";
		cin >> m[i].num2;
		system("cls");
		menu();
		cin >> answ;
		switch (answ)
		{
		case 1: continue; break;
		case 2: Show(m, counter); break;
		case 3: UpDate(m, counter); break;
		case 4:break;
		}
		flag = 1;
	}

}
int main()
{
	setlocale(LC_ALL, "RUS");
	Contacts Contact[N];
	int menu_sol,counter = 0;
	cout << "Создайте контакт!" << endl;
	Input(Contact,counter);
	
	do
	{
		system("cls");
		menu();

		cin >> menu_sol;
		
		switch (menu_sol)
		{
		case 1: Input(Contact,counter);break;
		case 2: Show(Contact,counter); break;
		case 3: UpDate(Contact, counter); break;
		default:
			break;
		}
		_getch();
	} while (menu_sol != 4);
	_getch();
	return 0;
}