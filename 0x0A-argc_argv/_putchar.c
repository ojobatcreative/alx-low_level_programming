#include <stdio.h>
#include "main.h"

/**
 * _putchzr - writes the char. c to stout
 * @c: Ther character to print
 *
 * Return: On success 1
 * On error, -1 is reurned and errno is set
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
