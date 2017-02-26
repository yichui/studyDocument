#include "sort.h"

//÷±Ω”≈≈–Ú
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

//øÏ≈≈À„∑®
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

//∂—≈≈–Ú
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
	//1.≥ı ºªØ∂—
	for (int i = (length - 1) / 2; i >= 0; --i)
	{
		headJust(arr, i , length);
	}

	//2.‘Ÿ≈≈–Ú
	for (int i = length - 1; i > 0; --i)
	{
		int t = arr[0];
		arr[0] = arr[i];
		arr[i] = t;

		headJust(arr, 0 , i);
	}

}

//πÈ≤¢≈≈–Ú
void filterMerge(int arr[], int block[], int startIndex, int midindex, int endIndex)
{
	int i = startIndex;
	int j = midindex + 1;
	int k = startIndex;

	while( i < midindex + 1 && j <= endIndex)
	{
		if (arr[i] < arr[j])
		{
			block[k++] = arr[i++];
		}
		else
		{
			block[k++] = arr[j++];
		}
	}
	while(i < midindex + 1)
	{
		block[k++] = arr[i++];
	}
	while ( j <= endIndex )
	{
		block[k++] = arr[j++];
	}

	for (i = startIndex; i <= endIndex; i++)
	{
		arr[i] = block[i];
	}
}


void mergeSort(int arr[], int block[], int startIndex, int endIndex)
{
	if (startIndex < endIndex)
	{
		int midIndex = (startIndex + endIndex) / 2;
		mergeSort(arr, block, startIndex, midIndex);
		mergeSort(arr, block, midIndex + 1, endIndex);
		filterMerge(arr, block, startIndex, midIndex, endIndex);
	}
}