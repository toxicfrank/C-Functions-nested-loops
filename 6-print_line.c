#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal.
 * @n: number of times the diagonal should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int x;

	if ((n == 0) || (n < 0))
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
