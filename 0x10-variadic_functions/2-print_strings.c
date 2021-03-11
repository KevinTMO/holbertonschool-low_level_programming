#include "variadic_functions.h"

/**
 *print_strings - will print a string using variadic
 *@separator: will print comma and space after string
 *@n: is the total of arguments
 *Return: will return void (nothing)
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int index;
	char *string;

	va_list args;

	va_start(args, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(args, char*);
		if (string == '\0')
		{
			printf("(Nil)");
		}
		printf("%s", string);

		if (separator != '\0' && index + 1 != n)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
