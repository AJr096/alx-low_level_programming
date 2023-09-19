#include  "main.h"

/**
 * print_line - it draws line, simple
 *
 * @n: numbers of lines
 *
 * Return: void
 */

void print_line(int n)
{
	int lnnumb;

	if (n > 0)
	{
		for (lnnumb = 0; lnnumb < n; lnnumb++)
		_putchar('_');
	_putchar('\n');
	}
	else
		_putchar('\n');
}
