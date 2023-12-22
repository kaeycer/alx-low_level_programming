#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: integer parameter
 *
 * Return: 1 for a digit, and 0 otherwise
 */
int _isdigit(int c)
{
	int x = 0;
	char i = '0';

	for (i <= '9')
	{
		if (c == i)
		{
			x += 1;
			break;
		}
		i++;
	}
	return (x);
}
