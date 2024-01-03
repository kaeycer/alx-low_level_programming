#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every character of a string
 * starting with the first character, followed by a new line
 * @str: parameter
 *
 * Return: every character of a string
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] % 2) == 0)
		{
			_putchar(str[i]);
		}
		i++;
}
