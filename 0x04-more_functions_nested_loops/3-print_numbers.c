#include "main.h"

/**
 * print_numbers - prints numbs from 0to9
 *
 * Return: always returns 0 (success)
 */

void print_numbers(void)
{

	int n = 0;

	do {
		_putchar(n + '0');
		n++;
	} while (n >= 0 && n < 10);
	_putchar('\n');
}
