#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonals
 * @a: no1 parm
 * @size: no2 parm
 *
 * Return: 0 always
 */
void print_diagsums(int *a, int size)
{
	int i = 0, one = 0, two = 0;

	while (i < size)
	{
		one += a[i * size + i];
		i++;
	}

	i = size - 1;
	while (i >= 0)
	{
		two += s[i * size + (size - i - 1)];
		i--;
	}
	printf("%d, %d\n", one, two);
}
