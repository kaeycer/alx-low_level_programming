#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: no1
 * @n: no2
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int a1[n];

	while (i < n)
	{
		a1[i] = a[i];
		i++;
	}

	i = 0;
	while (n > 0)
	{
		a[i] = a1[n - 1];
		i++;
		n++;
	}
}
