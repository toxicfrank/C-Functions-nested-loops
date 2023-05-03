#include "main.h"
/**
 * print_last_digit - function that prints the
 * last digit of a number.
 * @n: digit to be divided by 10 to return last digit
 * Return: the value of the last digit
 */


int print_last_digit(int n)
{
	int x;

	x = n %10;

	if (x < 0)
		x = -(x);
	_putchar(x + '0');
	return (x);
}
