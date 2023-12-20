#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - Print the alphabet in lowercase
 * then a new line
 */
void print_alphabet(void)
{
	int i = 0;
	char letter;

	while (i < 1)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
		i++;
	}
}
