#include "main.h"

/**
 * _islower - function checks for lower case character
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)

{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
