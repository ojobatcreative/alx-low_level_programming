#include "main.h"
/**
 * _memset - fill a block of memory with a specific value
 * @s: buffer array
 * @b: constant byte
 * @n: number of bytes to be changed
 *
 * Return: Pointer to memory area 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	int q;

	q = 0;

	for (; n > 0; q++)
	{
		s[q] = b;
		n--;
	}
	return (s);
}
