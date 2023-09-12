#include <stdio.h>

/**
 * main - entré
 *
 * Description: print all possible compinations of a single digit number
 *
 * Return: toujours 0 (succes)
 */

int main(void)
{
	int nombre = 0;

	while (nombre <= 9)
	{
		putchar(nombre + 48);

		if (nombre != 9)
		{
			putchar(',')
			putchar(' ')
		}
		nombre++;
	}
	putchar('\n');

	return (0);
}
