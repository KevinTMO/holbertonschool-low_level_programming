#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - argc (argument count) && argv (argument vector)
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 always (sucess)
 */

int main(int argc, char *argv[])
{
	int index;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (index = 1; argv[index]; index++)
		{
			if (isdigit(*argv[index]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[index]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
