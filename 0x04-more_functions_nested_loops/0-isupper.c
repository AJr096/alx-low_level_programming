#include "main.h"

/**
 * _isupper - checks if the c (character) is uppercase
 *
 * @c: input for alph. character
 *
 * Return: 1 if upper, otherwise 0
 */

int _iupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
