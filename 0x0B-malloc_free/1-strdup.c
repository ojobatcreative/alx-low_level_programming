#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string using malloc
 * @str: this is the string to duplicated
 * Return: Pointer to a the new duped string
 */

char *_strdup(char *str)
{
	char *a1;
	int i, t;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++);

	a1 = malloc(i * sizeof(*a1) + 1);

	if (a == NULL)
		return (NULL);

	for (t = 0; t < i; t++)
		a[t] = str[t];
	a[t] = '\0';

	return (a1);
}
