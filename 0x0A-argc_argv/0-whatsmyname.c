#include "holberton.h"

/**
 *main - argc (argument count) && argv (argument vector)
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 always (sucess)
 */

int main(int argc, char *argv[])
{
	while (argc --)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
