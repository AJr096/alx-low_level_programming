#include <stdio.h>
#include "main.h"

/**
 * main - entry punk
 *
 * Description: classic fizzinga nd buzzinga nd fizzbuzzing
 *
 * Return: 0 success
 */

int main(void)
{
	int n;
		for (n = 1; n < 101; n++)
		{
			if (n % 3 == 0 && n % 5 == 0)
			{
				printf("FizzBuzz");
			}
			else if (n % 5 == 0)
			{
				printf("Buzz");
			}
			else if (n % 3 == 0)
			{
				printf("Fizz");
			}
			else
			{
			printf("%d", n);
			}

			if (n != 101)
				printf(" ");
			else 
				break;
		}

	return (0);
}
