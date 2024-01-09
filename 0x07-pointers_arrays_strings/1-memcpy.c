#include <stdio.h>
#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: no1 parameter
 * @src: no2 parameter
 * @n: no3 parameter
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
