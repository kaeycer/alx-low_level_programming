#include <stdio.h>
#include "main.h"

/**
 * _islower - Checks for a lowercase character
 * @c: an integer argument
 *
 * Return: 1 if the letter lowercase or 0 if otherwise
 */
int _islower(int c)
{
	char i = 'a';

	while (i <= 'z')
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
