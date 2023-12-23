#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square
 * @size: integer parameter
 *
 * Return: prints the # character
 */
void print_square(int size)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		j = 0;
		while (j < n)
		{
			_putchar('#');
			j++;
		}
		putchar('\n');
		i++;
	}
}
