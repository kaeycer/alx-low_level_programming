#include <sdtio.h>

/**
 * main - Entry void
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	for (char i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (char i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
