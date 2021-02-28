#include <iostream>

using namespace std;
#define tab "\t"
#define split "---------------------------------------------------"

void FillRand(int arr[], const int n)
{
	//��������� ������ ���������� �������
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand(); // ���������� ��������������� ����� �� 0 �� 32767
	}
}
void Print(int arr[], const int n)
{
	//������� ������ �� �����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

}
void ShiftLeft(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++) //���� �������� �� number of shifts ���������
	{
		int buffer = arr[0];
		for (int j = 0; j < n; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[n - 1] = buffer;
	}
}
void ShiftRight(int arr[], const int n, const int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++) //���� �������� �� number of shifts ���������
	{
		int buffer = arr[4];
		for (int j = n-1; j > 0; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[0] = buffer;
	}
}
void ShiftSum(int arr[], const int n, int ShiftSumm)
{
	for (int i = 0; i < n; i++)
	{
		ShiftSumm += arr[i];
	}
	cout << "����� ���� ��������� �������: " << ShiftSumm << endl;
}
void ShiftAvg(int arr[], const int n, int Avg,int ShiftSumm)
{
	for (int i = 0; i < n; i++)
	{
		ShiftSumm += arr[i];
	}
	cout << "Average value : " << ShiftSumm / n << endl;

}
void MinValueIn(int arr[], const int n, int MinValue)
{
	MinValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < MinValue) MinValue = arr[i];
	}
	cout << "Min value is : " << MinValue << endl;
}
void MaxValueIn(int arr[], const int n, int MaxValue)
{
	MaxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > MaxValue) MaxValue = arr[i];
	}
	cout << "Max value is : " << MaxValue << endl;
}
void Sort(int arr[], const int n,int buff)
{
	for (int i = 0; i < n - 1; i++) 
	{
		for (int j = 0; j < n - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				buff = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = buff;
			}
		}
	}
}
int main()
{
	setlocale(LC_ALL, "Russian");
	cout << " Hello Functions! " << endl;
	const int n = 5;
	int ChooseRes;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	//����� ������� �� �������� ����� ���������
	int number_of_shifts;
	int ShiftSumm=0, Avg=0,MinValue=0,MaxValue = 0,buff=0;
	cout << "Enter the action with array: " << endl;
	cout << "Type 1 for shift the array to the left side" << endl;
	cout << "Type 2 to shift the array to the right side" << endl;
	cout << "Type 3 to calculate the summ of all values of array" << endl;
	cout << "Type 4 to calculate the average value of array" << endl;
	cout << "Type 5 to find min value of array" << endl;
	cout << "Type 6 to find max value of array" << endl;
	cout << "Your choose: "; cin >> ChooseRes;
	switch (ChooseRes)
	{
	case 1 :
		cout << "Enter number of shifts: "; cin >> number_of_shifts;
		ShiftLeft(arr, n, number_of_shifts);
		Print(arr, n);
		break;
	case 2 :
		cout << "Enter number of shifts: "; cin >> number_of_shifts;
		ShiftRight(arr, n, number_of_shifts);
		Print(arr, n);
		break;
	case 3: 
		ShiftSum(arr, n, ShiftSumm);
		break;
	case 4:
		ShiftAvg(arr, n, Avg, ShiftSumm);
		break;
	case 5:
		MinValueIn(arr, n, MinValue);
		break;
	case 6:
		MaxValueIn(arr, n, MaxValue);
		break;
	case 7:
		Sort(arr, n, buff);
		Print(arr, n);
		break;
	default: cout << "Error" << endl;
	}

}

