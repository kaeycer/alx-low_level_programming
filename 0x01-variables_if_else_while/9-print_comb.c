#include <stdio.h>

/**
 * main - prints all possible combinations of single digit numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	return (0);
}
