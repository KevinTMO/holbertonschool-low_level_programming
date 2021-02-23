#include "holberton.h"

/**
 *print_chessboard - will print a chessboard using two dimensional array
 *@a: this is the pointer pointing the two dimensional array
 *Return: will return 0 (void)
 */

void print_chessboard(char (*a)[8])
{
	int row;
	int col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 9; col++)
		{
			if (col == 8)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(a[row][col]);
			}
		}
	}
}
