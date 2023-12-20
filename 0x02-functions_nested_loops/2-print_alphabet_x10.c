#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabets in lowercase 10 times
 * then prints a new line
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char letter;

	while (i < 10)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_puthcar('\n');
		i++;
	}
}