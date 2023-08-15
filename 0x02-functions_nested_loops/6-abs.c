#include "main.h"
/**
 * _abs - Computes the absolute value
 * of an integer.
 *
 * @e: input number as an integer.
 *
 * Return: absolute value
 */
int _abs(int e)
{
	if (e >= 0)
	{
		return (e);
	}
	else
	{
		return (e * -1);
	}
}
