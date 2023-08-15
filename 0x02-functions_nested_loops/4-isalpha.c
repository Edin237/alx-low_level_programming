#include "main.h"
/**
 * _isalpha - Shows 1 if the input is a
 * letter Another cases, shows 0
 *
 * @e: The character in ASCII code
 *
 * Return: 1 for letters. 0 for the rest.
 */
int _isalpha(int e)
{
	if ((e >= 97 && e <= 122) || (e >= 65 && e <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
