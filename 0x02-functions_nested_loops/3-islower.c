#include "holberton.h"

/**
 *_islower - will check if there's any lowercase
 *@c: is the variable for the statements
 *Return: will return 1 if lowercase or 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else

		return (0);

}
