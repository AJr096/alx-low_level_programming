#include "main.h"

/**
 * print_rev - prnts reverse of string, followed by newline
 *
 * @s: pntr to string to prnt
 *
 * Return: void
 */

void print_rev(char *s)
{
	int flip = 0;

	while (s[flip])
		flip++;

	while (flip--)
	{
		_putchar(s[flip]);
	}
	_putchar('\n');
}
