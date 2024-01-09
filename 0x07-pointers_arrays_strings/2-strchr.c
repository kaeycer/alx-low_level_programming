#include <stdio.h>
#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: no1 parameter
 * @c: no2 parameter
 *
 * Return: pointer to s or "NULL" if the character is not found
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
