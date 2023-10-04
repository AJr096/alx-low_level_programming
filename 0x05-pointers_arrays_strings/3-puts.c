#include "main.h"

/**
 * _puts - prnt string, then newline to stdout
 *
 * @str: string prmter to prnt
 *
 * Return: void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
