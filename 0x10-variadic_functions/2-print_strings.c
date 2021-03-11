#include "variadic_functions.h"

/**
 *
 *
 *
 *
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
