#include <iostream>
#include <conio.h>
#include <ctime>
using namespace std;



void SHowMoney(int money)
{
	cout << "�� ����� ����� " << money << '$';
}

void menu()
{
	
	 cout << "1. ���������� ����" << endl;
	 cout << "2. ������� ��� ���� � ����������" << endl;
	 cout << "3. ����� �� ����" << endl;
	
	
}
int main()
{
	setlocale(LC_ALL, "RUS");
	int stp,loc,money = 0,n;
	
	do
	{
		srand(time(NULL));
		loc = rand() % 12 + 1;
		cout << "��� ���: ";
		while (!(cin >> stp) || stp > 12 || stp < 0)
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "������� �������� �� 0 �� 12: ";
		}
		if (loc == stp)
		{
			money += 10;
			cout << "�� �������� 10$!\n";
			cout << "������ ����� " << loc << "\n\n";
		}
		else if ((stp == loc + 1) || (stp == loc - 1))
		{
			money += 5;
			cout << "�� �������� 5$!\n";
			cout << "������ ����� " << loc << "\n\n";
		}
		else
		{
			cout << "�� ���������!\n";
			cout << "������ ����� " << loc << "\n\n";
		}
		menu();
		while (!(cin >> n) || n > 3 || n < 0)
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "������� �������� �� 1 �� 3: ";
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