#include "main.h"

/**
 * print_alphabet - entry
 *
 * Description: using the function _putchar to print a-z
 *
 * Return: void
 */

void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
		_putchar(n);
	_putchar('\n');
}
