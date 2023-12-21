#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * followed by a new line
 * @n: integer parameter
 */
void print_to_98(int n)
{
	for (int i = 0; n < 99; i++)
	{
		printf("%d, ", n++);
	}
	for (int i = 0; n > 99; i++)
	{
		printf("%d, ", n--);
	}
	_putchar('\n');
}
