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
		randArr(arr1, N, 11);//заполняем массив arr1 ранд числами
		copyArr(arr1, arr2, N);//массиву arr2 присваюем массив arr1
		time(0);//время отсчета для сортировки поузырьком
		boublesort(arr1, N);//сортировка пузырьковая
		t1 = clock() / 1000.0;//время работы сортировки пузырька
		cout << endl << counter << ". Время работы пузырьковой сортировки " << t1;
		time(0);//время отсчета для сортировки вставками
		insertionSort(arr2, N);//сортировка вставками
		t2 = clock() / 1000.0;//время работы сортировки вставки
		cout << endl << counter << ". Время работы сортировки вставками " << t2;
		counter++;
		t1sum += t1;//сумирование время сортировки пузырьком
		t2sum += t2;//сумирование время сортировки вставками
	}
	
	cout << "\n\nСреднее значение пузырьковой сортировки массива за 4 итерации " << t1sum/counter << endl;
	cout << "Среднее значение сортировки массива вставками за 4 итерации " << t2sum/counter << endl;
	_getch();
	return 0;
}