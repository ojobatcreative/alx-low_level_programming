#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
int iy = 0;
while (str[iy])
{
_putchar(str[iy]);
iy++;
}
_putchar('\n');
}
