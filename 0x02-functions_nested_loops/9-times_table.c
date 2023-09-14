#include "main.h"

/**
 * times_table - prints the time table of9
 */

void times_table(void)
{
	int n, m, o;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (m = 1; m <= 9; m++)
		{
			_putchar(',');
			_putchar(' ');

			o = n * m;
			if (o <= 9)
				_putchar(' ');
			else
				_putchar((o / 10) + 48);
			_putchar((o % 10) + 48);
		}
		_putchar('\n');
	}
}
