#include "main.h"

/**
 * _isdigit - checks for digit
 *
 * @c: input for digit
 *
 * Return: 1 if digit, 0 otherwise
 */

int _isdigit(int c);
{
	for (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
