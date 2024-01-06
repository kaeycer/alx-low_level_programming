#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - copies n characters from a string
 * @dest: no1
 * @src: no2
 * @n: no3
 *
 * Return: string to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n)
	{
		dest[x] = src[x];
		x++;
	}
	return (dest);
}
