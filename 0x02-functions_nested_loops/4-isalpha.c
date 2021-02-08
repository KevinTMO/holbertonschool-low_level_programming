#include "holberton.h"

/**
 *_isalpha - will check if the characters are uppercase
 *@c: is the variable that will check the characters
 *Return: will return 1 if upper or 0 if not
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else

		return (0);
}
