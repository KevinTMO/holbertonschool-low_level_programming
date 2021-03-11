#include "variadic_functions.h"

/**
 *sum_them_all - this will add all the arguments next to n
 *@n: this is the first argument
 *Return: will return the total of arguments next to n
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index, sumarg = 0;

	va_list args;

	if (args == 0 || n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		sumarg += va_arg(args, unsigned int);
	}

	va_end(args);

	return (sumarg);
}
