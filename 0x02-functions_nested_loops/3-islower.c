#include "main.h"

/**
 * _islower - is a function taht checks if char. is low case
 *
 * @c: checks input of the function
 *
 * Return: rturns 1 if c is lowcase otherwise gives 0 as success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}	
