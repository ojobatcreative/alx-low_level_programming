#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int r = 0, s, t;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (r < size)
	{
		s = size - r < 10 ? size - r : 10;
		printf("%08x: ", r);
		for (t = 0; t < 10; t++)
		{
			if (t < s)
				printf("%02x", *(b + r + t));
			else
				printf("  ");
			if (t % 2)
			{
				printf(" ");
			}
		}
		for (t = 0; t < s; t++)
		{
			int c = *(b + r + t);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		r += 10;
	}
}
