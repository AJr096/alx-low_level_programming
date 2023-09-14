#include <stdio.h>

/**
 * main - entry pointo
 *
 * Description: prog taht prints 50 first italien numbers
 *
 * Return: 0 molto bene
 */

int main(void)
{
	int counter;
	unsigned long ezio1 = 0, ezio2 = 1, ac2;

	for (counter = 0; counter < 50; counter++)
	{
		ac2 = ezio1 + ezio2;
		printf("%lu", ac2);

		ezio1 = ezio2;
		ezio2 = ac2;

		if (counter == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
