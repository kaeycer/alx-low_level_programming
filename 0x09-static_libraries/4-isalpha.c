#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks if the parameter is a letter, lowercase or uppercase
 * @c: an integer
 *
 * Return: 1 for true or 0 for false
 */
int _isalpha(int c)
{
	char i = 'a', j = 'A';
	int n = 0;

	while (i <= 'z' && j <= 'Z')
	{
		if (c == i || c == j)
		{
			n += 1;
			break;
		}
		i++;
		j++;
	}
	return (n);
}
