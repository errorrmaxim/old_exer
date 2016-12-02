#include <iostream>
#include <conio.h>

using namespace std;

struct Auto
{
	char *name;
	int year;
	double cost;
};

void Input(Auto a[], int lenght)
{
	for (auto i(0); i < lenght; i++)
	{
		cout << i + 1 << '\n';
		cout << "������� ����� ����: ";
		a[i].name = new char[40];
		cin.get();
		cin.getline(a[i].name, 40);
		
		cout << "������� ��� ������� ����: ";
		while (!(cin >> a[i].year) || a[i].year > 2017 || a[i].year < 1900)
		{
			cout << "������ �����: ��������� \n \n";
			cout << "������� ��� ������� ����: ";
		}

		cout << "������� ��������� ����: ";
		while (!(cin >> a[i].cost) || a[i].cost < 0.0)
		{
			cout << "������ �����: ��������� \n \n";
			cout << "������� ��������� ����: ";
		}
		cout << endl;

	}
}


void ShowCars(const Auto a[],int lenght)
{
	for (auto i(0); i < lenght; i++)
	{
		cout << "�����: " << a[i].name << endl;
		cout << "��� �������: " << a[i].year << endl;
		cout << "���������: " << a[i].cost << endl;
		cout << "------------------------" << endl;
	}
}
void menu()
{
	cout << "1. ������� �������� \n";
	cout << "2. ������� �������� \n";
	cout << "3. ����� \n";

}

void Free(Auto s[], int lenght)
{
	for(auto i(0); i<lenght;i++)
	delete[] s[i].name;
}
int main()
{
	setlocale(LC_ALL, "Russian");

	int m;
	int N;
	
	do
	{
		cout << "������� ���-�� �����������, ��� �������� ��������: ";
		cin >> N;
	} while (N <= 0);
	
	

	Auto * car = new Auto[N];
	Input(car, N);
	do
	{
		menu();
		cin >> m;

		switch (m)
		{
		case 1: system("cls"); 
				cout << "������� ���-�� �����������, ��� �������� ��������: ";
				cin >> N; 
				Input(car, N);
			break;
		case 2:system("cls"); ShowCars(car, N);
			break;
		case 3: return 0;
		default: "Error: ����� ���� �� ������!";
			break;
		}

	} while (m!=3);
	


		Free(car, N);
	delete[] car;

	_getch();
	return 0;
}