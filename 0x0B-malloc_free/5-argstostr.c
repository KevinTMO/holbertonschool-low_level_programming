#include "holberton.h"
#include "stdlib.h"

/**
 *argstostr - this will concatenate arguments strings
 *@ac: is the argument counts
 *@av: is argument vectors
 *Return: will return the pointer
 */

char *argstostr(int ac, char **av)
{
	char *ch;
	int index, sindex, result;

	if (ac == 0 || av == NULL)
	{
		return (0);
	}

	for (index = 0; index < ac; index++)
	{
		for (sindex = 0; av[index][sindex]; sindex++)
		{
			;
		}
		result += sindex + 1;
	}

	ch = malloc(sizeof(char) * result + 1);

	if (!ch)
	{
		return (0);
	}

	result = 0;

	for (index = 0; index < ac; index++)
	{
		for (sindex = 0; av[index][sindex]; sindex++, result++)
		{
			ch[result] = av[index][sindex];
		}
		ch[result] = '\n';
		result++;
	}
	ch[result] = '\0';
	return (ch);
}
