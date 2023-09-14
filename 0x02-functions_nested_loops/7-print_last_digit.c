#include "main.h"

/**
 * print_last_digit - prints teh last digit of a number
 *
 * @lsd: takes numb input
 *
 * Return: lastD
 */

int print_last_digit(int lsd)
{
	int lastD;

	if (lsd < 0)
		lastD = -1 * (lsd % 10);
	else
		lastD = lsd % 10;

	_putchar(lastD + '0');
	return (lastD);
}

