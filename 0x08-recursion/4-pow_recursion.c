#include "main.h"

/**
 * _pow_recursion - Returns the value of `x` raised to the power of `y`.
 * @x: The base value.
 * @y: The power value.
 * Return: The result of x raised to the power of y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	{
		int result = _pow_recursion(x, y / 2);
		
		if (y % 2 == 0)
			return (result * result);
		else
			return (x * result * result);
	}
}
