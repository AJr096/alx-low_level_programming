#include <stdio.h>

/**
 * main - Entru pointareuu
 *
 * Description: print every single digit number
 *
 * Return: always 0 is success
 */

int main(void)
{
	int dadigit = 0;

	while (dadigit <= 9)
	{
		printf("%i", dadigit);
		dadigit++;
	}
	putchar('\n');

	return (0);
}
