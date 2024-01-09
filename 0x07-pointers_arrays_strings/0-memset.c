#include <stdio.h>
#include "main.h"

/**
  * _memset - fills the memory with a constant byte
  * @s: no1 parameter
  * @b: no2 paramater
  * @n: no3 parameter
  *
  * Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
		s[i] = b;
	return (s);
}
