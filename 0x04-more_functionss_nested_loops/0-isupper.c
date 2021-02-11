#include "holberton.h"

/**
 *_isupper - will print numbers or groups of numbers to 98
 *@c: will print all the numbers until 98
 *Return: will return 0 if lowercase and return 1 if uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else

		return (0);
}
