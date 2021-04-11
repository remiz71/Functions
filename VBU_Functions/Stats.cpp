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
