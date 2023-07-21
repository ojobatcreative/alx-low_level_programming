#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: resepresents the number of arguments
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list mon_numz;
	unsigned int count;
	int sum = 0;

	if (n == 0)
		return (0);
	sum = 0;

	va_start(mon_numz, n);

	for (count = 0; count < n; count++)
		sum += va_arg(mon_numz, int);
	va_end(mon_numz);
	return (sum);
}
