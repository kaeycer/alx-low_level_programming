#include <stdio.h>
#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src, including the terminating null character
 * @dest: parameter
 * @src: parameter two
 *
 * Return: a pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
