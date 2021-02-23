#include "holberton.h"

/**
 *set_string - will change the value of a pointer to a character
 *@s: is the pointer pointing to another point that will receive the char value
 *@to: is the value for s
 *Return: will return nothing (void)
 */

void set_string(char **s, char *to)
{
	*s = to;
}
