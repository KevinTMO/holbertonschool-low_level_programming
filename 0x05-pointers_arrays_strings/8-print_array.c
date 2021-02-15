#include "holberton.h"

/**
 *print_array - will print the value of the array
 *@a: is the pointer array with the values
 *@n: is the variable that will be the numbers
 *Return: will return nothing (void)
 */

void print_array(int *a, int n)
{
	int index;

	n--;

	for (index = 0; index <= n; index++)
	{
		if (index == n)
		{
			printf("%d", a[index]);
		}
		else
		{
			printf("%d, ", a[index]);
		}
	}
}
