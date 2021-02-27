#include "holberton.h"

/**
  *main - argc (argument count) && argv (argument vector)
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 always (sucess)
  */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
