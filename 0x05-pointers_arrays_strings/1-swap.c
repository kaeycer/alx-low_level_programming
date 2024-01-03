#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first parameter
 * @b: second parameter
 *
 * Return: the outcome
 */
void swap_int(int *a, int *b)
{
	int pa, pb;

	pa = *a;
	pb = *b;

	*a = pb;
	*b = pa;
}
