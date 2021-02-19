#include "holberton.h"

/**
 *reverse_array - will swap values from first to end position until reverse
 *@a: is the array with the values
 *@n: is the variable to that contains the lenght of the array
 *Return: will return nothing (void)
 */

void reverse_array(int *a, int n)
{
	int index;
	int temp;

	n = n - 1;

	for (index = 0; index <= n; index++)
	{
		temp = a[index];
		a[index] = a[n];
		a[n] = temp;
		n--;
	}
}
