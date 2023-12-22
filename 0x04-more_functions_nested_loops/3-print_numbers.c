#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 * folloewd by a new line
 */
void print_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
}
