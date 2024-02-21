#include <stdio.h>

/**
 * main - prints loewrcase alphabets in reverse
 *
 * Return: Always 0
 */
int main(void)
{
	char i;

	i = 'z';
	while (i >= 'a')
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
