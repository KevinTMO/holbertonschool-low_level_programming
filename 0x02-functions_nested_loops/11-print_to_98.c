#include "holberton.h"

/**
 *print_to_98 - will print numbers or groups of numbers to 98
 *@n: will print all the numbers until 98
 *Return: will return 0 if true
 */

void print_to_98(int n)
{
	int i, l, m;

	if (n == 98)
	{
		printf("%d ", n);
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else if (n > 98)
	{
		for (l = n; l >= 98; l--)
		{
			printf("%d", l);
			if (l != 98)
			{
				printf(",");
				printf(" ");
			}
		}
	}
	else if (n < 0)
	{
		for (m = n; m <= 98; m++)
		{
			printf("%d", -m);
		}
	}
	printf("\n");
}
