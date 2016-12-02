#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;



void SHowMoney(int money)
{
	cout << "На вашем счету " << money << '$';
}

void menu()
{
	
	 cout << "1. Продолжить игру" << endl;
	 cout << "2. Вывести мой счет и продолжить" << endl;
	 cout << "3. Выход из игры" << endl;
	
	
}
int main()
{
	setlocale(LC_ALL, "RUS");
	int stp,loc,money = 0,n;
	
	do
	{
		srand(time(NULL));
		loc = rand() % 12 + 1;
		cout << "Ваш ход: ";
		while (!(cin >> stp) || stp > 12 || stp < 0)
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Введите значение от 0 до 12: ";
		}
		if (loc == stp)
		{
			money += 10;
			cout << "Вы выиграли 10$!\n";
			cout << "Выпало число " << loc << "\n\n";
		}
		else if ((stp == loc + 1) || (stp == loc - 1))
		{
			money += 5;
			cout << "Вы выиграли 5$!\n";
			cout << "Выпало число " << loc << "\n\n";
		}
		else
		{
			cout << "Вы проиграли!\n";
			cout << "Выпало число " << loc << "\n\n";
		}
		menu();
		while (!(cin >> n) || n > 3 || n < 0)
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Введите значение от 1 до 3: ";
		}
		switch (n)
		{
		case 1: break;
		case 2: SHowMoney(money); _getch(); break;
		case 3: return 0;
		}
		system("cls");
	} while (n != 3);
	

	

	_getch();
	return 0;
}