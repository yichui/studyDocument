#include "sort.h"

//直接排序
void insertSort(int arr[], int number)
{
	int temp;
	for (int i = 1; i < number; i++)
	{
		temp = arr[i];
		int j;
		for (j = i; j > 0 && arr[j - 1] > temp; j--)
		{
			arr[j] = arr[j - 1];
		}
		arr[j] = temp;
	}
}

//快排算法
void quickSort(int arr[], int left, int right)
{
	if (left < right)
	{
		int i = left;
		int j = right;
		int temp = arr[left];
		while (i < j)
		{
			while(i < j && arr[j] >= temp)
				j--;
			while(i < j && arr[i] <= temp)
				i++;
			if (i < j)
			{
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}

		arr[left] = arr[i];
		arr[i] = temp;
		quickSort(arr, left, i - 1);
		quickSort(arr,i + 1, right);

	}
}

//堆排序
void headJust(int arr[], int local, int length)
{
	int temp = arr[local];
	int child = 2 * local + 1;
	while (child < length)
	{
		if (child + 1 < length && arr[child] < arr[child + 1])
		{
			child ++;
		}

		if (arr[local] < arr[child])
		{
			arr[local] = arr[child];
			local = child;
			child = 2 * local + 1;
		}
		else
		{
			break;
		}
		arr[local] = temp;
	}
}

void headSort(int arr[], int length)
{
	//1.初始化堆
	for (int i = (length - 1) / 2; i >= 0; --i)
	{
		headJust(arr, i , length);
	}

	//2.再排序
	for (int i = length - 1; i > 0; --i)
	{
		int t = arr[0];
		arr[0] = arr[i];
		arr[i] = t;

		headJust(arr, 0 , i);
	}

}