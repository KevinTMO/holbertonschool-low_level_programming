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
	int index = 1;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		while (argv[index])
		{
			if (isdigit(*argv[index]) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[index]);
			index++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
