#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string parameter
 *
 * Return: Always 0
 */
void _puts_recursion(char *s)
{
	int i = 0, counter = 0;

	while (s[i] != '\0')
	{
		counter = i;
		i++;
	}

	i = 0;

	while (i <= (counter + 1))
	{
		if (i == (counter + 1))
		{
			_putchar('\n');
		}
		_putchar(s[i]);
		i++;
	}
}
