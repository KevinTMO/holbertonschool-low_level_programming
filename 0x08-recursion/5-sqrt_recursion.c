#include "holberton.h"

/**
 *square_root - will get the square root of a number
 *@incre: this will increment numbers until get the value of n and get the
 *square root of that number
 *@n: this is the number to get the square root from
 *Return: will return -1 if the number is greater
 *and will return incre if is the square root
 */

int square_root(int n, int incre)
{
	if (incre * incre > n) /* this tell if the result is greater than */
	{
		return (-1);
	}
	if (incre * incre == n) /* this will tell if the result is equal to n */
	{
		return (incre);
	}
	return (square_root(n, incre + 1));
}

/**
 *_sqrt_recursion - compare the number with the square_root function
 *@n: this is the numbere to get the square root from
 *Return: will return -1 is n is less than what the incre is
 */

int _sqrt_recursion(int n)
{
	if (n < 0) /* if n is less than the incre then its not a square root */
	{
		return (-1);
	}

	return (square_root(n, 0));
}
