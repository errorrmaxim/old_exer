#include <iostream>
#include <conio.h>

using namespace std;


int main()
{
	setlocale(LC_ALL, "RUS");
	int cost, a, b, c, d, z;
	cout << "¬ведите цену до 9999: ";
	while (!(cin >> cost) && cost != 0)
	{
		cout << "¬ведите челочисленное значение, не равное нулю!";
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
		cout << "Ќоль";
	}
	switch (a)
	{
	case 9: cout << "ƒев€ть тыс€чь "; break;
	case 8: cout << "¬осемь тыс€чь "; break;
	case 7: cout << "—емь тыс€чь "; break;
	case 6: cout << "Ўесть тыс€чь "; break;
	case 5: cout << "ѕ€ть тыс€чь "; break;
	case 4: cout << "„етыре тыс€чи "; break;
	case 3: cout << "“ри тыс€чи "; break;
	case 2: cout << "ƒве тыс€чи "; break;
	case 1: cout << "ќдна тыс€ча "; break;
	case 0: cout << " "; break;
	default:
		break;
	}

	switch (b)
	{
	case 9: cout << "дев€тьсот "; break;
	case 8: cout << "восемьсот "; break;
	case 7: cout << "семьсот "; break;
	case 6: cout << "шестьсот "; break;
	case 5: cout << "п€тьсот "; break;
	case 4: cout << "четыресто "; break;
	case 3: cout << "триста "; break;
	case 2: cout << "двесте "; break;
	case 1: cout << "cто "; break;
	case 0: cout << " "; break;
	default:
		break;
	}

	switch (c)
	{
	case 9: cout << "дев€носто "; break;
	case 8: cout << "восемьдес€т "; break;
	case 7: cout << "семьдес€т "; break;
	case 6: cout << "шестьдес€т "; break;
	case 5: cout << "п€тьдес€т "; break;
	case 4: cout << "сорок "; break;
	case 3: cout << "тридцать "; break;
	case 2: cout << "двадцать "; break;
	case 0: cout << " "; break;
	default:
		break;
	}

	if (z < 20)
	{
		
		switch (z)
		{
		case 19: cout << "дев€тнадцать гривен"; break;
		case 18: cout << "восемьнадцать гривен"; break;
		case 17: cout << "семьнадцать гривен"; break;
		case 16: cout << "шестьнадцать гривен"; break;
		case 15: cout << "п€тнадцать гривен"; break;
		case 14: cout << "четырнадцать гривен"; break;
		case 13: cout << "тринадцать гривен"; break;
		case 12: cout << "двенадцать гривен"; break;
		case 11: cout << "одинадцать гривен"; break;
		case 10: cout << "дес€ть гривен"; break;
		case 9: cout << "дев€ть гривен"; break;
		case 8: cout << "восемь гривен"; break;
		case 7: cout << "семь гривен"; break;
		case 6: cout << "шесть гривен"; break;
		case 5: cout << "п€ть гривен"; break;
		case 4: cout << "четыре гривны"; break;
		case 3: cout << "три гривны"; break;
		case 2: cout << "две гривны "; break;
		case 1: cout << "одина гривна"; break;

		default:
			break;
		}
	}
	else if (c >= 2)
	{
		switch (d)
		{
		case 9: cout << "дев€ть гривен"; break;
		case 8: cout << "восемь гривен"; break;
		case 7: cout << "семь гривен"; break;
		case 6: cout << "шесть гривен"; break;
		case 5: cout << "п€ть гривен"; break;
		case 4: cout << "четыре гривны"; break;
		case 3: cout << "три гривны"; break;
		case 2: cout << "две гривны "; break;
		case 1: cout << "одина гривна"; break;
		case 0: cout << " "; break;
		default:
			break;
		}
	}
	
	_getch();
	return 0;
}