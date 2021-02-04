#include <stdio.h>

/**
 *main - entry point
 *
 *Return: Always 0 (Sucess)
 */

int main(void)
{
	int alphrev;

	for (alphrev = 'z'; alphrev >= 'a'; alphrev--)
	{
		putchar(alphrev);
	}
	putchar('\n');
	return (0);
}
