#include "main.h"

/**
 * print_number - prints an integer, simple as that
 *
 * @n: the integer
 */

void print_number(int n)
{
	unsigned int m;
	m = n; /* if yie know ye know */

	if (n < 0)
	{
		_putchar('-');
		m = -m;
	}

	if ((m / 10) >= 0)
	{
		print_number(m / 10); /* magic */
	}

	_putchar((m % 10) + '0'); /* or 48 doesnt matter */
}
