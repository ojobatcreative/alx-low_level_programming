#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: The string to be printed
 */

void puts2(char *str)
{
	int ji;

	for (ji = 0; str[ji] != '\0'; ji++)
	{
		if (ji % 2 == 0)
			_putchar(str[ji]);
	}
	_putchar('\n');
}
