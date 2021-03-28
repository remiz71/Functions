char ShiftSum(char arr[], const int n)
{
	char ShiftSumm = 0;
	for (int i = 0; i < n; i++)
	{
		ShiftSumm += arr[i];
	}
	return ShiftSumm;
}
int ShiftSum(int arr[], const int n)
{
	int ShiftSumm = 0;
	for (int i = 0; i < n; i++)
	{
		ShiftSumm += arr[i];
	}
	return ShiftSumm;
}
double ShiftSum(double arr[], const int n)
{
	double ShiftSumm = 0;
	for (int i = 0; i < n; i++)
	{
		ShiftSumm += arr[i];
	}
	return ShiftSumm;
}
float ShiftSum(float arr[], const int n)
{
	float ShiftSumm = 0;
	for (int i = 0; i < n; i++)
	{
		ShiftSumm += arr[i];
	}
	return ShiftSumm;
}

char ShiftAvg(char arr[], const int n)
{
	return (char)ShiftSum(arr, n) / n;
}
double ShiftAvg(int arr[], const int n)
{
	return (double)ShiftSum(arr, n) / n;
}
double ShiftAvg(double arr[], const int n)
{
	return (double)ShiftSum(arr, n) / n;
}
float ShiftAvg(float arr[], const int n)
{
	return (float)ShiftSum(arr, n) / n;
}

char MinValueIn(char arr[], const int n)
{
	char MinValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < MinValue) MinValue = arr[i];
	}
	return MinValue;
}
char MaxValueIn(char arr[], const int n)
{
	char MaxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > MaxValue) MaxValue = arr[i];
	}
	return MaxValue;
}
int MinValueIn(int arr[], const int n)
{
	int MinValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < MinValue) MinValue = arr[i];
	}
	return MinValue;
}
int MaxValueIn(int arr[], const int n)
{
	int MaxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > MaxValue) MaxValue = arr[i];
	}
	return MaxValue;
}
double MinValueIn(double arr[], const int n)
{
	double MinValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < MinValue) MinValue = arr[i];
	}
	return MinValue;
}
double MaxValueIn(double arr[], const int n)
{
	double MaxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > MaxValue) MaxValue = arr[i];
	}
	return MaxValue;
}
float MinValueIn(float arr[], const int n)
{
	float MinValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < MinValue) MinValue = arr[i];
	}
	return MinValue;
}
float MaxValueIn(float arr[], const int n)
{
	float MaxValue = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > MaxValue) MaxValue = arr[i];
	}
	return MaxValue;
}
