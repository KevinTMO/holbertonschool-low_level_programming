#include "holberton.h"

/**
 *swap_int - will swap the values of two pointers using a temp var
 *@a: is one of the pointers to swap
 *@b: is one of the pointers to swap
 *Return: will return nothing (void)
 */

void swap_int(int *a, int *b)
{
	int holder = *a;

	*a = *b;
	*b = holder;
}
