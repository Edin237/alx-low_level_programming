#include "main.h"

/**
 * print_number - print an integer
 * @n: parameter, integer value/ input
 *
 */

void print_number(int n)
{
	unsigned int e = n;

	if (n < 0)
	{
		_putchar(45);
		e = -e;
	}
	if (e / 10)
	{
		print_number(e / 10);
	}
	_putchar(e % 10 + '0');
}
