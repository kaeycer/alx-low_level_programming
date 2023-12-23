#include <stdio.h>

/** main - prints fizz buzz to the terminal
 *
 * Return: always 0.
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if ((i % 5) == 0)
			printf("Buzz ");
		else if ((i % 3) == 0)
			printf("Fizz ");
		else
			printf("%d ", i);

		i++;
	}
	return (0);
}
