#include <stdio.h>

/**
 * main - prints the output to the screen
 * @argc: this is the argument cout
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	for (int i  = 0; i < argv; i++)
	{
		printf("%c", argv[i]);
	}
	printf("\n");

	return (0);
}
