#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: whcih is the size of array
 * @c: char to assign to the array
 *
 * Return: The array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int t;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (t = 0; t < size; t++)
		str[t] = c;
	return (str);
}
