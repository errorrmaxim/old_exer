#include <Windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int sys_hour, sys_min, sys_second, sys_sum;
	int user_day, user_hour, user_min, user_second, user_sum;
	int sum_val,answ_hour, answ_min, answ_sec,mounth,year;
	SYSTEMTIME now;
	GetLocalTime(&now);

	year = now.wYear;
	mounth = now.wMonth;
	user_day = now.wDay;
	sys_hour = now.wHour * 3600;
	sys_min = now.wMinute * 60;
	sys_second = now.wSecond;
	sys_sum = sys_hour + sys_min + sys_second;  // сумма секунд системы
	cout << "Time now " << now.wHour << ':' << now.wMinute << ':' << now.wSecond << endl;
	cout << "Enter hours: "; cin >> user_hour;
	cout << "Enter minutes: "; cin >> user_min;
	cout << "Enter seconds: "; cin >> user_second;
	user_hour *= 3600;
	user_min *= 60;
	user_sum = user_hour + user_min + user_second; //сумма секунд юзверя
	sum_val = user_sum + sys_sum;
	answ_hour = sum_val / 3600;
	answ_min = (sum_val % 3600) / 60;
	answ_sec = (sum_val % 3600) % 60;
	if (answ_hour >= 24)
	{
		answ_hour -= 24;
		user_day++;
	}

	cout << user_day << '.' << mounth << '.' << year << "   " << answ_hour << ':' << answ_min << ':' << answ_sec;


	_getch();
	return 0;
}