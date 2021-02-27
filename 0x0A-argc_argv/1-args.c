#include "holberton.h"

/**
  4  *main - argc (argument count) && argv (argument vector)
  5  *@argc: argument count
  6  *@argv: argument vector
  7  *Return: 0 always (sucess)
  8  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
