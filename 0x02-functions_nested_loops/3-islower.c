#include "main.h"

/**
 * _islower - check if char is lowercase
 * @e: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int e)
{
	if (e >= 'a' && e <= 'z')
		return (1);
	else
		return (0);
}
