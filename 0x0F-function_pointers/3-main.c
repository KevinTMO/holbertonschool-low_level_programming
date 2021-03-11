#include "3-calc.h"

/**
 *main - will get the arguments and do an arithmetic operation
 *@argc: will count the arguments
 *@argv: will point to the string of arguments
 *Return: will return 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	result = get_op_func(argv[2])(num1, num2);

	printf("%d\n", result);

	return (0);
}
