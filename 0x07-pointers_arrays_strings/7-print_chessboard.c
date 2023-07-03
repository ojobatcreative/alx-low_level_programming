#include "main.h"

/**
 * print_chessboard - print the chessboard, 2d array
 * @a: 2d array of chars
 */

void print_chessboard(char (*a)[8])
{
	int c = 0, z;

	while (c < 8)
	{
		z = 0;
		while (z < 8)
		{
			_putchar(a[c][z]);
			z++;
		}
		_putchar('\n');
		c++;
	}
}
