#include <stdio.h>
#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: no1 parm
 * @needle: no2 parm
 *
 * Return: pointer to hte beginnning of the located substring or "NULL"
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *ptr_haystack = haystack;
		char *ptr_needle = needle;

		while (*ptr_haystack == *ptr_needle && *ptr_needle != '\0')
		{
			ptr_haystack++;
			ptr_needle++;
		}
		if (*ptr_needle == '\0')
			return (haystack);
	}
	return (0);
}
