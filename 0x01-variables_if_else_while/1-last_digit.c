#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* rectification of the program, adding code */

/* main - Entry Point
 *
 * Description: a C program that gives the last digit of a randomly generated num
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
		printf("Last digit of
	return (0);
}
