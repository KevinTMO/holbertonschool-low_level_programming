#include "holberton.h"

/**
 *print_last_digit - will get the last digit of a number
 *@n: will return de last digit of the number
 *Return: will return the value of the variable
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n <= 0)

		n = n * -1;
	_putchar(n + '0');


	return (n);
}
