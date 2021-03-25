#include "holberton.h"

/**
 *binary_to_uint - will convert a binary number to decimal
 *@b: is the pointer pointing to the string with binary numbers
 *Return: will return the result after conversion
 */

unsigned int binary_to_uint(const char *b)
{
	int index = 0, powBase = 1;
	unsigned int result = 0;

	if (b == NULL)
	{
		return (result);
	}

	while (b[index] != '\0')
	{
		index++;
	}
	index -= 1;

	while (index >= 0)
	{
		if (b[index] != '0' && b[index] != '1')
		{
			return (0);
		}
		if (b[index] == '1')
		{
			result += powBase;
		}
		powBase = powBase * 2;
		index--;
	}
	return (result);
}
