#include <stdio.h>
#include "holberton.h"

/**
 *main - will sum all natural numbers of 3 and 5 until 1023
 *
 *Return: will return 0 if sucess
 */

int main(void)
{
	int num;
	int sum;

	for (num = 0; num < 1024; num++)
	{
		sum = 0;

		if ((num % 3 == 0) || (num % 5 == 0))
		{
			sum += num;
			printf("%d ", sum);
		}
	}
	putchar('\n');
	return (0);
}
