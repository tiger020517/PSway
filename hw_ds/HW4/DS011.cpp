#include <iostream>
using namespace std;

int	*getOuts(int *arr, int size);

int	main (void)
{
	int	size;
	int	idx;
	int	*arr;
	int	*outs;

	cin >> size;
	arr = new int[size];
	idx = -1;
	while (++idx < size)
	{
		cin >> arr[idx];
	}
	idx = -1;
	outs = getOuts(arr, size);
	cout << outs[0] << ' ' << outs[1] << endl;
}

int	*getOuts(int *arr, int size)
{
	int	max;
	int	sum;
	int	idx;
	int	*outs;

	idx = -1;
	max = arr[0];
	sum = 0;
	while (++idx < size)
	{
		if (arr[idx] > max)
			max = arr[idx];
		sum += arr[idx];
	}
	outs = new int[2];
	outs[0] = sum;
	outs[1] = max;
	return (outs);
}
