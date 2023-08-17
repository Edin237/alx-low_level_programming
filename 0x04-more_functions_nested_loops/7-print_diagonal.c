#include "main.h"

/**
 * print_diagonal - print diahgonal lines
 *
 * @n: no of inputs
 */

void print_diagonal(int n)
{
	int e, j;

	for (e = 0; e < n; e++)
	{
		if (n > 1)
			for (j = 0; j < e; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}

	if (n <= 0)
	{
		_putchar('\n');
	}
}
