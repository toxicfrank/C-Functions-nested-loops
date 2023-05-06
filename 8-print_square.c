#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: size of the square
 * Return: void
 */

void print_square(int size)
{
	int i, k;

	if ((size == 0) || (size < 0))
	{
		_putchar('\n');
	}
	else{
		for (i = 0; i < size; i++){
			for(k = 0; k < size; k++){
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
