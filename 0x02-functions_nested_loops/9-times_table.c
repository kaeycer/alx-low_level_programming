#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 * starting at 0
 */
void times_table(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			printf("%d, ", i*j);
		}
		_putchar('\n');
	}
}
