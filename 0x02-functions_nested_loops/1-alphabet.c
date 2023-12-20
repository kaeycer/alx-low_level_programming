#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0.
 */
void print_alphabet(void)
{
	 int i = 0, letter;
	while (i < 1)
	{
		letter = 'a';
		while (letter != 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
