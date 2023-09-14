#include "main.h"

/**
 * print_sign - function that prints the sign of a numbr
 *
 * @n: takes number(integer) type input for the function
 *
 * Return: 1 if posit, 0 if 0 , and -1 if negat
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45)
		return (-1);
	}
}

