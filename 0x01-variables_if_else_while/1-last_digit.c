#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - prints output on the screen
 *
 * Return: Always (0) for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int i = n % 10;

	if (i > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, i);
	else if (i == 0)
		printf("Last digit of %d is %d and is 0\n", n, i);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, i);

	return (0);
}
