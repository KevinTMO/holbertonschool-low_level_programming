#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *main - entry point
 *
 *Return: Always 0 (Sucess)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d", n);

	if (n < 0)
	{
		printf(" is negative");
	}
	else if (n > 0)
	{
		printf(" is positive");
	}
	else
	{
		printf(" is zero");
	}
	putchar('\n');
	return (0);
}
