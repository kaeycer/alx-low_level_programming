#include <stdio.h>
#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 * @s: no1 parm
 * @to: n02 parm
 *
 * Return: always 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
