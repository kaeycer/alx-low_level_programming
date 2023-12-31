#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: integer parameter
 *
 * Return: print _ or a new line
 */
void print_line(int n)
{
	int i;

	if (n != 0 && !(n < 0))
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}
