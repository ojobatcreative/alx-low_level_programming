#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	/* This creates a va_list to store the var. argument list */
	va_list mon_numz;
	unsigned int cnt;

	/* init va_list for the number of arguments */
	va_start(mon_numz, n);

	/* loop through/access all arguments stored in the va_list */
	for (cnt = 0; cnt < n; cnt++)
	{
		printf("%d", va_arg(mon_numz, int));
		if (cnt != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(mon_numz);
}
