#include "main.h"

/**
 * _atoi - same as atoi
 *
 * @s: strg input para
 *
 * Return: the converted string as int
 */

int _atoi(char *s)
{
	unsigned int numb = 0;
	int sin = 1;

	do {
		if (*s == '-')
			sin *= -1;
		else if (*s >= '0' && *s <= '9')
			numb = (numb * 10) + (*s - '0');
		else if (numb > 0)
			break;
	} while (*s++);

	return (numb * sin);
}
