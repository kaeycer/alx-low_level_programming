#include <stdio.h>

/**
 * main - Entry void
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	while (i <= 'z')
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
		i++;
	}
	putchar('\n');

	return (0);
}
