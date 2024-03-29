#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - returns a value of x raised to the power of y
 * @x: parameter x
 * @y: parameter y
 *
 * Return: -1 if y is less than 0 otherwise, x raised to y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
