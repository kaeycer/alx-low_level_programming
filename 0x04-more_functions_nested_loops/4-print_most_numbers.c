#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers from 0-9
 * except 2 and 4
 * followed by a new line
 */
void print_most_numbers(void)
{
	for (char i = '0'; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
		{
			putchar(i);
		}
	}
	putchar('\n');
}
