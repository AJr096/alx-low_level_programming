#include "main.h"

/**
 * _isalpha - a function taht checks if a letter is low or up case
 *
 * @c: takes input from anderes fonctionen
 *
 * Return: 1 is truth else 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c <= 90 && c >= 65)
		return (1);
	return (0);
}
