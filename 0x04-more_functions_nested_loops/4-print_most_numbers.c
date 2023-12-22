#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers from 0-9
 * except 2 and 4
 * followed by a new line
 */
void print_most_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		if (i != '2' && i != '4')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');
}
