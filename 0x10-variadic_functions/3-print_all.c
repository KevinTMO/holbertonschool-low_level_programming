#include "variadic_functions.h"

/**
 *print_char - will print a character
 *@args: is the arguments
 *Return: will return void (nothing)
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 *print_str - will print a string
 *@args: is the arguments
 *Return: will return void (nothing)
 */

void print_str(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		str = "(nil)";
	}
	printf("%s", str);
}

/**
 *print_float - will print a float number
 *@args: is the arguments
 *Return: will return void (nothing)
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 *print_int - will print a character
 *@args: is the arguments
 *Return: will return void (nothing)
 */

void print_int(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 *print_all - will print anything
 *@format: will be the first string to compare
 *Return: will return nothing (void)
 */

void print_all(const char * const format, ...)
{
	int index, sindex;
	char *comspace = "";

	va_list args;

	fname_t func[] = {
		{"c", print_char},
		{"s", print_str},
		{"f", print_float},
		{"i", print_int},
		{NULL, NULL}
	};

	va_start(args, format);

	index = 0;
	while (format != NULL && format[index] != '\0')
	{
		sindex = 0;
		while (func[sindex].opsym != NULL)
		{
			if (*(func[sindex].opsym) == format[index])
			{
				printf("%s", comspace);
				func[sindex].f(args);
				comspace = ", ";
			}
		sindex++;
		}
	index++;
	}
	putchar('\n');
}
