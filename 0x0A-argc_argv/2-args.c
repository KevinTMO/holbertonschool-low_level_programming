#include "holberton.h"

/**
 *main - argc (argument count) && argv (argument vector)
 *@argc: argument count
 *@argv: argument vector
 *Return: 0 always (sucess)
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
