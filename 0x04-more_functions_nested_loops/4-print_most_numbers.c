#include "main.h"

/**
 * print_most_numbers - print 0 to 9
 *
 * except 2 and 4
 */

void print_most_numbers(void)
{
	int e;

	for (e = 0; e <= 9; e++)
	{
		if (e != 2 && e != 4)
		{
			_putchar(e + '0');
		}
	}
	_putchar('\n');
}
