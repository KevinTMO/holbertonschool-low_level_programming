#include "holberton.h"

/**
 *factorial - will get the factorial of every number in the main
 *@n: this will be every number to get the factorial
 *Return: will return 1 if 0 and -1 if error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
