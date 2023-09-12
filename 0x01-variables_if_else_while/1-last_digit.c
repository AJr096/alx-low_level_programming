#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* task 1 */

/**
 * main - Entry Point
 *
 * Description: C program that gives last digit of a randomly generated num
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	printf("Last digit of %i", n);
	printf(" is ");
	if (digit > 5)
		printf("%i and is greater than 5\n", digit);
	else if (digit == 0)
		printf("%i and is 0\n", digit);
	else if (digit < 6 && digit != 0)
		printf("%i and is less than 6 and not 0\n", digit);
	return (0);
}
