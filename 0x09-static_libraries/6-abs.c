#include "main.h"

/**
 * _abs - functions that computes the absolute value of an integer
 * @c: is the number to be computed
 * Return: Absolute value of number or zero
 */

int _abs(int c)

{
	if (c < 0)
	{
		int v_abs;

		v_abs = c * -1;
		return (v_abs);
	}
	return (c);
}
