#include <iostream>
#include <conio.h>

using namespace std;

void lol(int x)
{
	if (x)
	{
		lol(x >> 1);
		cout << (x & 1);
	}
}

int main()
{
	/*int num = 0, t = 0, d = 1;
	cout << "Enter count: " << endl;
	cin >> num;
	while (num)
	{
		t += (num % 2)*d;
		num = num / 2;
		d = d * 10; 
	}
	cout << t;*/
	int x;
	cin >> x;
	lol(x);
	_getch();
	return 0;
}