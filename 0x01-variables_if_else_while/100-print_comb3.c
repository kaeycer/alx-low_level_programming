#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int i, n;

	i = 48;

	while (i <= 56)
	{
		n = 49;
		while (n <= 57)
		{
			if (n != i && n > i)
			{
				putchar(i);
				putchar(n);
				if (i != 56)
				{
					putchar(',');
					putchar(' ');
				}
				else
				{
					putchar('\n');
				}
			}
			n++;
		}
		i++;
	}
	return (0);
}
