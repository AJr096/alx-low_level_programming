#include "main.h"

/**
 * print_alphabet_x10 - a noice function, print alpha 10times
 *
 * Description: it does i swear
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int dude, bro;

	for (dude = 0; dude <= 9; dude++)
	{
		for (bro = 'a'; dude <= 'z'; bro++)
			_putchar(bro);
		_putchar('\n');
	}
}

