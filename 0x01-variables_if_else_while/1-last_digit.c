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
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	lastdigit = n % 10;

	printf("Last digit of %d is %d", n, lastdigit);
	if (lastdigit > 5)
	{
		printf(" and is greater than 5\n");
	}
	else if (lastdigit != 0 && lastdigit < 6)
	{
		printf(" and is less than 6 and not 0\n");
	}
	else
	{
		printf(" and is 0\n");
	}
	return (0);
}
