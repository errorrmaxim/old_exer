#include "my_include.h"

using namespace std;

//variables
char login[10] = "lololo";
char loggin[10];
//password list
int password[4] = { 323232,121212,454545,545454 };
// cin_password
int pass;


//function
void Input();//input function
bool Verify();//verify function
void Sleep(BYTE time);

int main()
{
	setlocale(LC_ALL, "RUS");
	
	Verify();

	_getch();
	return 0;
}


void Input()
{
	
	cout << "Введите логин: ";
	cin >> loggin;
	cout << "Введите пароль: ";
	cin >> pass;
	
}

bool Verify()
{
	int counter = 1;
	Input();
	bool m;
	while (counter <= 3)
	{
		

		for (int i = 0; i < 4; i++)
		{
			if (password[i] != pass)
			{
				system("cls");
				cout << "Ошибка ввода! \n";
				continue;
				
			}
			else
			{
				system("cls");
				cout << "Добро пожаловать!";
				return 1;
			}
					
		}
		if (counter == 3)
		{
			Sleep((BYTE)2);
			system("cls");
			cout << "Попробуйте позже!";
			return 0;
		}
			
			
		
		counter++;
		Input();

	}
	
}
void Sleep(BYTE time)
{
	Sleep((DWORD)time * 1000);
	return;
}