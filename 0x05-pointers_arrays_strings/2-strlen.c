#include <stdio.h>
#include "main.h"

/**
 * _strlen - gets the length of a string
 * @s: char parameter
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
