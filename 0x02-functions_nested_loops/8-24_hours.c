#include "main.h"

/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int vi, fi;

	for (vi = 0; vi < 24; vi++)
	{
		for (fi = 0; fi < 60; fi++)
		{
			_putchar((vi / 10) + '0');
			_putchar((vi % 10) + '0');
			_putchar(':');
			_putchar((fi / 10) + '0');
			_putchar((fi % 10) + '0');
			_putchar('\n');
		}
	}
}
