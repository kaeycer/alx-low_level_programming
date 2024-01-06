#include <stdio.h>
#include "main.h"

/**
 * *leet - encodes a string into 1337
 * @n: no1
 *
 * Return: a pointer
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	i = 0;
	while (n[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
			j++;
		}
		i++;
	}
	return (n);
}
