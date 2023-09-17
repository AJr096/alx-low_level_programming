#include "main.h"

/**
 * print_most_numbers - prints numbs 0to9 except 2and4
 *
 * Return: 0 always
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
			continue;
		_putchar(n + '0');
	}
		_putchar('\n');
}
