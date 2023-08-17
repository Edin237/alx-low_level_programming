#include "main.h"

/**
 * print_diagonal - print diahgonal lines
 *
 * @n: no of inputs
 */

void print_diagonal(int e)
{
	int i, j;

	for (i = 0; i < e; i++)
	{
		if (e > 1)
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}

	if (e <= 0)
	{
		_putchar('\n');
	}
}
