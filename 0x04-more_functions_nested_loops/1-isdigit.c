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

	for (char i = '0'; i <= '9'; i++)
	{
		if (c == i)
		{
			x += 1;
			break;
		}
	}
	return (x);
}
