#include "main.h"

/**
 * more_numbers - print 0 to 14 ten times
 *
 */

void more_numbers(void)
{
	int e, d;

	for (e = 0; e <= 9; e++)
	{
		for (d = 0; d <= 14; d++)
		{
			if (d >= 10)
			{
			_putchar((d / 10) + '0');
			}
		_putchar((d % 10) + '0');
		}
		_putchar('\n');
	}
}
