#include "main.h"

/**
 * puts2 - prints every other char
 *
 * @str: strg prmtr input
 *
 * Return: void
 */

void puts2(char *str)
{
	int othr;

	for (othr = 0; str[othr] != '\0'; othr++)
	{
		if (othr % 2 == 0)
			_putchar(str[othr]);
	}
	_putchar('\n');
}
