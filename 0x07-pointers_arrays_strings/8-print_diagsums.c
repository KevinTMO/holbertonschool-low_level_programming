#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - will sum the values in diagonal from left to right
 *@a: this is the pointer pointing dimensional arrays
 *@size: this is the size of the arrays
 *Return: will return 0 (void)
 */

void print_diagsums(int *a, int size)
{
	int index;
	int sindex;
	int sum1 = 0;
	int sum2 = 0;

	for (index = 0; index <= (size * size); index += size + 1)
	{
		sum1 += a[index];
	}
	for (sindex = size - 1; sindex < (size * size) - 1; sindex += size - 1)
	{
		sum2 += a[sindex];
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
