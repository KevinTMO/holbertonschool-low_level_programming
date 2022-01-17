#include <stdio.h>
#include "search_algos.h"

/**
 *printArr - print the array by parts depending on low/high
 *@array: the array with the elements
 *@low: the first element of the array
 *@high: the last element of the array
 *Return: will return nothing (void)
 */

void printArr(int *array, int low, int high)
{
	int index;

	if (low <= high)
	{
		printf("Searching in array: ");

		for (index = low; index <= high; index++)
		{
			printf("%i", array[index]);

			if (index < high)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}

/**
 *binary_search - will search the value in a simple array
 *@array: the array with the elements
 *@size: the size of the array
 *@value: the value to search in the array
 *Return: will return the value if found or -1 if not
 */

int binary_search(int *array, size_t size, int value)
{
	int low = 0;
	int high = size - 1;
	int mid = 0;

	if (!array)
	{
		return (-1);
	}

	printArr(array, low, high);

	while (low <= high)
	{
		mid = (low + high) / 2;

		if (value > array[mid])
		{
			low = mid + 1;
			printArr(array, low, high);
		}

		else if (value < array[mid])
		{
			high = mid - 1;
			printArr(array, low, high);
		}

		else if (array[mid] == value)
		{
			return (mid);
		}
	}
	return (-1);
}
