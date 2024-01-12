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
	int counter = 0;
	for(int i = 0; s[i] != '\0'; i++)
	{
		counter = i;
	}

	for (int i = 0; i <= (counter + 1); i++)
	{
		if( i == (counter + 1))
		{
			_putchar('\n');
		}
		_putchar(s[i]);
	}
}
