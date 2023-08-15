#include "main.h"
/**
 * print_alphabet_x10 - Print ten lines of the alphabet
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int l, a;

	for (l = 0; l <= 9; l++)
	{
		for (a = 97; a <= 122; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}

}
