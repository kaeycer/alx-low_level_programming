#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an arra
 * followed by a new line
 * separated by a comma, followed by a space
 * displayed in the same order
 * @a: first parameter
 * @n: second parameter
 *
 * Return: elements of an array
 */
void print_array(int *a, int n)
{
	int i, x = 0;

	i = n;

	while (x < i)
	{
		if (x == 0)
		{
			printf(" %d", a[x]);
		}
		else
		{
			printf(", %d", a[x]);
		}
		x++;
	}
}
