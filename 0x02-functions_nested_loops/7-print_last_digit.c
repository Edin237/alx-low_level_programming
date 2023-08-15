#include "main.h"
/**
 * print_last_digit - Prints the last digit
 * of a number.
 *
 * @e: input number as an integer.
 *
 * Return: last digit.
 */
int print_last_digit(int e)
{
	int l;

	l = e % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
