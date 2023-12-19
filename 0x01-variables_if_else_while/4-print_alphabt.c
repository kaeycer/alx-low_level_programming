#include <stdio.h>

/**
 * main - Entry void
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
