#include "holberton.h"

/**
 *_isdigit - will check if theres any digit in the variable
 *@c: will check for digits
 *Return: return 1 if digit and will return 0 otherwise
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
		return (0);
}
