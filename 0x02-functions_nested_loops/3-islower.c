#include "main.h"
/**
 * _islower - Print 1 if c is lowercase char
 *
 * @c: c is the ASCII characrter
 *
 * Return: 1 if c is lowercase character. 0 otherwise.
 */
int _islower(int c)
{
	for (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}
