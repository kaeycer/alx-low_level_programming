#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints numbers 0-14 10 times
 * followed by a new line
 */
void more_numbers(void)
{
	int i = 0, j;

	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			printf("%d", j);
			j++;
		}
		putchar('\n');
		i++;
	}
}
