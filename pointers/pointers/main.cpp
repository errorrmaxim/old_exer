#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	int cost, a, b, c, d, z;
	cout << "������� ���� �� 9999: ";
	while (!(cin >> cost) && cost != 0)
	{
		cout << "������� ������������� ��������, �� ������ ����!";
		cin.clear();
		while (cin.get() != '\n')
		{
			continue;
		}
	}

	a = cost / 1000;
	b = (cost % 1000) / 100;
	c = (cost % 100) / 10;
	d = (cost % 10) / 1;
	z = (cost % 100) / 1;
	if (cost == 0)
	{
		cout << "����";
	}
	switch (a)
	{
	case 9: cout << "������ ������ "; break;
	case 8: cout << "������ ������ "; break;
	case 7: cout << "���� ������ "; break;
	case 6: cout << "����� ������ "; break;
	case 5: cout << "���� ������ "; break;
	case 4: cout << "������ ������ "; break;
	case 3: cout << "��� ������ "; break;
	case 2: cout << "��� ������ "; break;
	case 1: cout << "���� ������ "; break;
	case 0: cout << " "; break;
	default:
		break;
	}

	switch (b)
	{
	case 9: cout << "��������� "; break;
	case 8: cout << "��������� "; break;
	case 7: cout << "������� "; break;
	case 6: cout << "�������� "; break;
	case 5: cout << "������� "; break;
	case 4: cout << "��������� "; break;
	case 3: cout << "������ "; break;
	case 2: cout << "������ "; break;
	case 1: cout << "c�� "; break;
	case 0: cout << " "; break;
	default:
		break;
	}

	switch (c)
	{
	case 9: cout << "��������� "; break;
	case 8: cout << "����������� "; break;
	case 7: cout << "��������� "; break;
	case 6: cout << "���������� "; break;
	case 5: cout << "��������� "; break;
	case 4: cout << "����� "; break;
	case 3: cout << "�������� "; break;
	case 2: cout << "�������� "; break;
	case 0: cout << " "; break;
	default:
		break;
	}

	if (z < 20)
	{
		
		switch (z)
		{
		case 19: cout << "������������ ������"; break;
		case 18: cout << "������������� ������"; break;
		case 17: cout << "����������� ������"; break;
		case 16: cout << "������������ ������"; break;
		case 15: cout << "���������� ������"; break;
		case 14: cout << "������������ ������"; break;
		case 13: cout << "���������� ������"; break;
		case 12: cout << "���������� ������"; break;
		case 11: cout << "���������� ������"; break;
		case 10: cout << "������ ������"; break;
		case 9: cout << "������ ������"; break;
		case 8: cout << "������ ������"; break;
		case 7: cout << "���� ������"; break;
		case 6: cout << "����� ������"; break;
		case 5: cout << "���� ������"; break;
		case 4: cout << "������ ������"; break;
		case 3: cout << "��� ������"; break;
		case 2: cout << "��� ������ "; break;
		case 1: cout << "����� ������"; break;

		default:
			break;
		}
	}
	else if (c >= 2)
	{
		switch (d)
		{
		case 9: cout << "������ ������"; break;
		case 8: cout << "������ ������"; break;
		case 7: cout << "���� ������"; break;
		case 6: cout << "����� ������"; break;
		case 5: cout << "���� ������"; break;
		case 4: cout << "������ ������"; break;
		case 3: cout << "��� ������"; break;
		case 2: cout << "��� ������ "; break;
		case 1: cout << "����� ������"; break;
		case 0: cout << " "; break;
		default:
			break;
		}
	}
	
	_getch();
	return 0;
}