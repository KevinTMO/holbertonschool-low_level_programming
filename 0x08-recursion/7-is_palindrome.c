#include "holberton.h"

/**
 *_strlen_recursion - will get the lenght of the string in reverse
 *@s: is the pointer pointing the string
 *Return: will return the lenght of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (_strlen_recursion(s + 1) + 1);
}

/**
 *string_compare - will compare the normal string and rev
 *@s: is the pointer pointing the string
 *@index: is the string in reverse
 *Return: will return 1 if polindrome, 0 if not
 */

int string_compare(char *s, int index)
{
	if (index <= 1)
	{
		return (1);
	}
	else if (*s == s[index - 1])
	{
		return (string_compare(s + 1, index - 2));
	}
	else
		return (0);
}

/**
 *is_palindrome - will check if the string is palindrome
 *@s:is the pointer pointing the string
 *Return: will return to the compare function or 1 if palindrome
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len <= 1)
	{
		return (1);
	}

	return (string_compare(s, len));
}
