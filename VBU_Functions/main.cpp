#include <iostream>

using namespace std;
#define tab "\t"
#define split "---------------------------------------------------"

void FillRand(int arr[], const int n)
{
	//Заполняем массив случайными числами
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand(); // генерирует псевдослучайное число от 0 до 32767
	}
}
void Print(int arr[], const int n)
{
	//выводим массив на экран
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}
void ShiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++) //цикл сдвигает на number of shifts элементов
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << " Hello Functions! " << endl;
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	//Сдвиг массива на заданное число элементов
	int number_of_shifts;
	cout << "Enter number of shifts: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);

	/////////////////////////////////////////////////////
	cout << split << endl;
	const int m = 8;
	int brr[m];
	FillRand(brr, m);
	Print(brr, m);
	cout << "Enter number of shifts: "; cin >> number_of_shifts;
	ShiftLeft(brr, m, number_of_shifts);
	Print(brr, m);
	cout << split << endl;
}

