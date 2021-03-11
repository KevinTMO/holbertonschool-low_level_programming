#include "variadic_functions.h"

/**
 *print_numbers - will print all the arguments after n with separator
 *@separator: is the comma and space after arguments
 *@n: is the total of arguments
 *Return: will return nothing (void)
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int index;

	va_list args;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(args, int));

		if (separator != '\0' && index + 1 != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
