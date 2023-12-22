#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if a char is uppercase
 * @c: only parameter
 *
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	int x = 0;

	for (char i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			x += 1;
			break;
		}
	}
	return (x);
}
