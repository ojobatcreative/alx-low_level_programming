#include "main.h"

/**
 * _strlen_recursion - Return the length of a string.
 * @s: The string.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int leng_str = 0;

	if (*s != '\0')
	{
		leng_str = 1;
		if (*(s + 1) != '\0')
			leng_str += _strlen_recursion(s + 1);
	}

	return (leng_str);
}
