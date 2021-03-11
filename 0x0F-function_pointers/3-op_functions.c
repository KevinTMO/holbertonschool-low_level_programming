#include "3-calc.h"

/**
 *op_add - will add two integers
 *@a: first integer
 *@b: second integer
 *Return: will return the result
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - will substrac two integers
 *@a: first integer
 *@b: second integer
 *Return: will return the result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - will multiply two integers
 *@a: first integer
 *@b: second integer
 *Return: will return the result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - will divide two integers
 *@a: first integer
 *@b: second integer
 *Return: will return the result
 */

int op_div(int a, int b)
{
	if (b > 0)
	{
		return (a / b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}

/**
 *op_mod - will get the remainder two integers
 *@a: first integer
 *@b: second integer
 *Return: will return the result
 */

int op_mod(int a, int b)
{
	if (b > 0)
	{
		return (a % b);
	}
	else
	{
		printf("Error\n");
		exit(100);
	}
}
