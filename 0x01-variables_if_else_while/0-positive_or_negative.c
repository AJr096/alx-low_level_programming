#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* positive or negative, like a gameshow */

/**
 * main - Entry point
 * Description: a program that prints wheter n is positive or negative
 * Return: 0 (great success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);
	return (0);
}
