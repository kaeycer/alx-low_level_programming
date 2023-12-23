#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: integer parameter
 *
 * Return: the \ character at the end of every line
 */
void print_diagonal(int n)
{
	int i, j;

	i = 0;
	while (i < n)
	{
		j = 1;
		while (j <= i)
		{
			if (i != 0)
			{
				_putchar(' ');
				j++;
			}
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
