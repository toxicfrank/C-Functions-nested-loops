#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9).
 * @c: function parameter that is an integer
 * Return: Returns 1 if c is a digit Returns 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
