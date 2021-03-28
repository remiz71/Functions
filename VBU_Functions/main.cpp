#include <iostream>
#include "Print.h"


using namespace std;
#define tab "\t"
#define split "---------------------------------------------------"
//UnicRand
void UnicRand(int arr[], const int n, int minRand=0, int maxRand=100);
void UnicRand(double arr[], const int n, int minRand=0, int maxRand=100);
void UnicRand(float arr[], const int n, int minRand=0, int maxRand=100);
void UnicRand(char arr[], const int n, int minRand=0, int maxRand=100);
//End
void FillRand(int arr[], const int n, int minRand=1, int maxRand=100);


template<typename T> void ShiftLeft(T arr[], const int n, const int number_of_shifts);
template<typename T> void ShiftRight(T arr[], const int n, const int number_of_shifts);
template<typename T> T ShiftSum(T arr[], const int n);
template<typename T> double ShiftAvg(T arr[], const int n);
template<typename T> T MinValueIn(T arr[], const int n);
template<typename T> T MaxValueIn(T arr[], const int n);
template<typename T> void Sort(T arr[], const int n);
template<typename T> void SortByChoise(T arr[], const int n);



	/* Прототип,реализация, вызов
	прототип состоит лишь из заголовка функции и заканчивается на ; и должен находится в самом верху до вызова функции
	Нужен для того, что бы что бы имя функици и список ее принимаемых параметров были известны на момент вызова, т.е функции main()
	*/
	/*
	Реализация функции или Определение функции (function definition)
	Состоит из заголовка и тела функции и определяет что делает функция, т.е содержит алгоритм, который реализует данная функция
	Реализация функции может находится где угодно, кроме рализации другой функции. В реализации функции можно писать все, что угодно, кроме реализации другой функции!!!
	*/
	/*
	Вызов функции (Function call) - использование написанной ранее функции
	Для того, чтобы функция заработала, мы должны ее вызвать хотя бы один раз.
	Один раз написанная функция может быть вызвана сколько угодно раз.

	Прототипы и реализации функций можно выносить в отдельные файлы
	Прототипы вносят обычно в заголовке в .h файлы
	Реализации -  .cpp файл

	ПРИНИМАЕМЫЕ/ПЕРЕДАВАЕМЫЕ ПАРАМЕТРЫ

	в протоптипе и в реализации мы показываем какие параметры функция принимает
	когда мы вызываем функцию, мы передаем в нее параметры
	Функция может передать столько параметров, сколько принимает , иначе возникает ошибка на этапе компиляции
	Но в некоторых случаях в функцию можно передать меньше параметров, чем она принимает, благодаря параметрам по умолчанию.
	Параметры по умолчанию - имеют значения по умолчанию

	Если список принимаемых параметров в прототипе и реализации функции отличается, то возникает ошибка на этапе компоновки (LNK) onresolved external symbol
	
	Стандартные параметры задаются только в прототипе!!


	*/

/*Шаблоны функций (Functions templates) - 
Принимает любые параметры значений.
Шаблон нужно создать :
template <typename T> - 
template показывает создание шаблона
typename - определяет имя шаблонного типа
T - имя шаблонного типа
 
 Шаблон , созданный перед прототипом функции, действует до ; после прототипа функции
 Если перед реализацией функции - то он существует до закрывающей фигурной скобки этой функции
После того как мы сделали функцию шаблонной, то есть создали перед ней шаблон, любой принимаемый параметр и любая локальная переменная этой функции могут быть шаблонного типа (Т)
 */

int main()
{
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	cout << " Проверка русской кодировки " << endl;
	const int n = 5;
	int ChooseRes;
	double arr[n];
	int C = 0;
	UnicRand(arr, n);
	Print(arr, n);
	int number_of_shifts;
	cout << "Enter the action with array: " << endl;
	cout << "Type 1 for shift the array to the left side" << endl;
	cout << "Type 2 to shift the array to the right side" << endl;
	cout << "Type 3 to calculate the summ of all values of array" << endl;
	cout << "Type 4 to calculate the average value of array" << endl;
	cout << "Type 5 to find min value of array" << endl;
	cout << "Type 6 to find max value of array" << endl;
	cout << "Type 7 to sorting the array from less value to biggest value" << endl;
	cout << "Your choose: "; cin >> ChooseRes;
	switch (ChooseRes)
	{
	case 1:
		cout << "Enter number of shifts: "; cin >> number_of_shifts;
		ShiftLeft(arr, n, number_of_shifts);
		Print(arr, n);
		break;
	case 2:
		cout << "Enter number of shifts: "; cin >> number_of_shifts;
		ShiftRight(arr, n, number_of_shifts);
		Print(arr, n);
		break;
	case 3:
		cout << "Summ all values of array " << ShiftSum(arr, n);
		break;
	case 4:
		cout << "Average value of all array's elements: " << ShiftAvg(arr, n);
		break;
	case 5:
		cout << "Minimal value of array " << MinValueIn(arr, n);
		break;
	case 6:
		cout << " Maximum value of array " << MaxValueIn(arr, n);
		break;
	case 7:
		
		cout << "Which type of sorting you want to use? 1 - bubble sorting ; 2 - selective sorting" << endl; 
		cout << "Your Choice: "; cin >> C;
		if (C == 1)
		{
			Sort(arr, n);
			Print(arr, n);
			break;
		}
		else if (C == 2)
		{
			SortByChoise(arr, n);
			Print(arr, n);
			break;
		}
		else break;
	default: cout << "Error" << endl;
	}
}
	void FillRand(int arr[], const int n, int minRand, int maxRand)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % (maxRand - minRand) + minRand;
		}
	}
	template<typename T> void Print(T arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << tab;
		}
		cout << endl;

	}
	template<typename T> void ShiftLeft(T arr[], const int n, const int number_of_shifts)
	{
		for (int i = 0; i < number_of_shifts; i++)
		{
			T buffer = arr[0];
			for (int j = 0; j < n; j++)
			{
				arr[j] = arr[j + 1];
			}
			arr[n - 1] = buffer;
		}
	}
	template<typename T> void ShiftRight(T arr[], const int n, const int number_of_shifts)
	{
		for (int i = 0; i < number_of_shifts; i++)
		{
			T buffer = arr[4];
			for (int j = n - 1; j > 0; j--)
			{
				arr[j] = arr[j - 1];
			}
			arr[0] = buffer;
		}
	}
	template<typename T> T ShiftSum(T arr[], const int n)
	{
		T ShiftSumm = 0;
		for (int i = 0; i < n; i++)
		{
			ShiftSumm += arr[i];
		}
		return ShiftSumm;
	}
	template<typename T> double ShiftAvg(T arr[], const int n)
	{
		return (double)ShiftSum(arr, n) / n;
	}
	template<typename T> T MinValueIn(T arr[], const int n)
	{
		T MinValue = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] < MinValue) MinValue = arr[i];
		}
		return MinValue;
	}
	template<typename T> T MaxValueIn(T arr[], const int n)
	{
		T MaxValue = arr[0];
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > MaxValue) MaxValue = arr[i];
		}
		return MaxValue;
	}
	template<typename T> void Sort(T arr[], const int n)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = 0; j < n - i - 1; j++)
			{
				if (arr[j] > arr[j + 1])
				{
					T buff = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = buff;
				}
			}
		}
	}
	template<typename T> void SortByChoise(T arr[], const int n)
	{
		for (int i = 0; i < n; i++)
		{
			for (int j = i+1; j < n; j++)
			{
				if (arr[j] < arr[i])
				{
					T buff = arr[i];
					arr[i] = arr[j];
					arr[j] = buff;
				}
			}
		}

	}
	void UnicRand(int arr[], const int n, int minRand, int maxRand)
	{
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % (maxRand - minRand) + minRand;
		}
	}
	void UnicRand(double arr[], const int n, int minRand, int maxRand)
	{
		minRand *= 100;
		maxRand *= 100;
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % (maxRand - minRand) + minRand;
			arr[i] /= 100;
		}
	}
	void UnicRand(float arr[], const int n, int minRand, int maxRand)
	{
		minRand *= 100;
		maxRand *= 100;
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % (maxRand - minRand) + minRand;
			arr[i] /= 100;
		}
	}
	void UnicRand(char arr[], const int n, int minRand, int maxRand)
	{
		minRand *= 100;
		maxRand *= 100;
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % (maxRand - minRand) + minRand;
			arr[i] /= 100;
		}
	}
	