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
	cout << "1.������ ����� �������" << endl;
	cout << "2.������� ��������" << endl;
	cout << "3.�������� ������� �������" << endl;
	cout << "4.�����" << endl;
}
void Show(Contacts *m, int counter)
{
	system("cls");//������� ������
	for (int i = 0; i < counter; i++)
	{
		cout << i + 1 << " �������:" << endl;//����� ���������� �������� (id)
		cout << "���: " << m[i].Name << endl;//��� ���� �����
		cout << "������� �������� �����: " << m[i].num1 << endl;//����� 1 ���� �����
		cout << "������� ��������� �����: " << m[i].num2 << endl;//����� 2 ���� �����
	}
	_getch();//��������� ����� � ��������� �� � ���

}
void UpDate(Contacts *m, int counter)
{
	int num_contact, answ;
	system("cls");
	Show(m, counter);
	cout << endl << "������� ����� ��������: "; cin >> num_contact;
	//_getch();
	for (int i = 0; i < counter; i++)
	{
		if (i == num_contact - 1)
		{
			cout << "������� ��� " << i + 1 << " ��������: ";
			cin >> m[i].Name;
			cout << "������� �������� �����: ";
			cin >> m[i].num1;
			cout << "������� ��������� �����: ";
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
		cout << "������� ��� " << i + 1 << " ��������: ";
		cin >> m[i].Name;
		cout << "������� �������� �����: ";
		cin >> m[i].num1;
		cout << "������� ��������� �����: ";
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
	cout << "�������� �������!" << endl;
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