#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0-9
 * folloewd by a new line
 */
void print_numbers(void)
{
	for (char i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
