#include <iostream>;
//#include <string>;
#include <conio.h>;
//#include <cmath>;
using namespace std;


	/*template <typename T>

	size_t size_of_array(T & ar)
	{
		return (sizeof(ar) / sizeof(ar[0]));
	}
	*/
bool accept()
{
	cout << "Let's begin? - y or n" << endl;

	char answ = 0;
	cin >> answ;

	if (answ == 'y') return true;
	return false;
	
}

bool accept2()
{
	cout << "Let's make it - y or n" << endl;
	char answer;
	answer = 0;
	cin >> answer;
	switch (answer)
	{
	case 'y':
		return true;
	case 'n':
		return false;
	default:
		cout << "Awswer is not" << endl;
		return false;
		break;
	}
}


int main()
{
	
	/*
	string lol[] = { "lol", "kek", "azaza" };
	
	int k = size_of_array(lol);
		
	for (int i = 0; i < k; i++)
	{
		cout << lol[i] << endl;
	}
	*/
	
	/*
	float a;

	cout << "Enter value A: ";
	cin >> a;
	double k = sqrt(a);
	cout << k;
	*/
	
	
	cout << accept2() << endl;
	

	_getch();
	return 0;
	
}