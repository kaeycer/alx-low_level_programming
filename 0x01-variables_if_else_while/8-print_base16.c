#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: Always (0)
 */
int main(void)
{
	int i;
	char n;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	n = 'a';
	while (n <= 'f')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
