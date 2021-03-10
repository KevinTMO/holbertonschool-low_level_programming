#include "function_pointers.h"

/**
 *print_name - will print a name using a pointer to call the function
 *@name: is the name of the person
 *@f: is the pointer pointing to the function
 *Return: will return void (nothing)
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == 0)
	{
		return;
	}
	f(name);
}
