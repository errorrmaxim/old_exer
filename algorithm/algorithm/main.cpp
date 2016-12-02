#include "mylibrary.h";

using namespace std;

const int N = 20;


int main()
{
	setlocale(LC_ALL, "RUS");
	
	int arr1[N],arr2[N],counter = 1;
	double t1, t2, t1sum = 0, t2sum = 0;
	
	while (counter <= 4)
	{
		srand(time(0));
		randArr(arr1, N, 11);//��������� ������ arr1 ���� �������
		copyArr(arr1, arr2, N);//������� arr2 ��������� ������ arr1
		time(0);//����� ������� ��� ���������� ����������
		boublesort(arr1, N);//���������� �����������
		t1 = clock() / 1000.0;//����� ������ ���������� ��������
		cout << endl << counter << ". ����� ������ ����������� ���������� " << t1;
		time(0);//����� ������� ��� ���������� ���������
		insertionSort(arr2, N);//���������� ���������
		t2 = clock() / 1000.0;//����� ������ ���������� �������
		cout << endl << counter << ". ����� ������ ���������� ��������� " << t2;
		counter++;
		t1sum += t1;//����������� ����� ���������� ���������
		t2sum += t2;//����������� ����� ���������� ���������
	}
	
	cout << "\n\n������� �������� ����������� ���������� ������� �� 4 �������� " << t1sum/counter << endl;
	cout << "������� �������� ���������� ������� ��������� �� 4 �������� " << t2sum/counter << endl;
	_getch();
	return 0;
}