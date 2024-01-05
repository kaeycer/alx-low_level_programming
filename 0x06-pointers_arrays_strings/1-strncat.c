#include <stdio.h>
#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: no1
 * @src: no2
 * @n: no3
 *
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, x = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (x < n)
	{
		dest[i] = src[x];
		i++;
		x++;
	}
	return (dest);
}
