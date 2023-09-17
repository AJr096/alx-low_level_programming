#include "main.h"

/**
 * more_numbers - prints 10times the numbs 0to14
 *
 * Return: 0 onsuccessfuly
 */

void more_numbers(void)
{
	int n, r, c;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 15; c++)
		{
			n = c;
			if (c > 9)
			{
				_putchar(1 + '0');
				n = c % 10;
			}
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
