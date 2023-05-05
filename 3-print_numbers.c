#include "main.h"

/**
 * print_numbers - function that prints the numbers, from 0 to 9,
 * followed by a new line
 * Return: number 0-9
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
}
