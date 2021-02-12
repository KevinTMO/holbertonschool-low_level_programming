#include <stdio.h>

/**
 *main - will print numbers, Fizz, Buzz or FizzBuzz depending on the statements
 *Return: will return 0 if sucess
 */

int main(void)
{
	int numbers;

	for (numbers = 1; numbers <= 100; numbers++)
	{
		if (numbers % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if ((numbers % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((numbers % 5) == 0)
		{
			printf("Buzz ");
		}
		else
			printf("%d ", numbers);
	}
	putchar('\n');
	return (0);
}
