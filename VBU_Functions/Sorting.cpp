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
		for (int j = i + 1; j < n; j++)
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