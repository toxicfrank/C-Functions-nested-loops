#include "main.h"
/**
 * _abs - function that computes the absolute
 * value of an integer.
 * @n: integer to be made absolete
 * Return: absolute value
 */

int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
