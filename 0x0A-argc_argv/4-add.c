#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 *main - argc (argument count) && argv (argument vector)
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 always (sucess)
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int index;
	int sindex;

	if (argc < 1)
	{
		printf("0\n");
	}
	for (index = 1; index < argc; index++)
	{
		for (sindex = 0; argv[index][sindex]; sindex++)
		{
			if (isalpha(argv[index][sindex]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[index]);
	}
	printf("%d\n", sum);
	return (0);
}
