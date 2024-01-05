#include <stdio.h>
#include "main.h"

/**
 * *_strcat - it concatenates two strings
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, n = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[n] != '\0')
	{
		dest[i] = src[n];
		i++;
		n++;
	}
	return (dest);
}
