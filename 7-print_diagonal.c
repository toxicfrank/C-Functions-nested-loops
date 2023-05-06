#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: number of lines to print
 * Return: int
 */

void print_diagonal(int n){
	int k, m;
	if ((n < 0) || (n == 0)){
		_putchar('\n');
	}
	else{
		for (k = 0; k <= n; k++){
			for (m = 0; m < k; m++){
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
