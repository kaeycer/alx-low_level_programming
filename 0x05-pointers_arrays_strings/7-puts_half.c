#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of the string
 * followed by a new line
 * @str: parameter
 *
 * Return: half of the string
 */
void puts_half(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')
	{
		i++;
	}
	n = 0;

	if (i % 2 == 0)
	{
		while (n <= (i-1))
		{
			if (n >= (i/2))
			{
				_putchar(str[n]);
			}
			n++;
		}
		_putchar('\n');
	}
	else {
		while (n <= (i-1))
		{
			if (n >= ((i-1)/2))
			{
				_putchar(str[n]);
			}
			n++;
		}
		putchar('\n');
	}
}
