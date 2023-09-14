#include "main.h"

/**
 * print_times_table - prints time table of n
 *
 * @n: takes integer input
 */

void print_times_table(int n)
{
	int r, m, b;

	if (n <= 15 && n >= 0)
	{
		for (b = 0; b <= n; n++)
		{
			_putchar(48);
			for (m = 1; m <= n; m++)
			{
				_putchar(',');
				_putchar(' ');

				r = b * m;

				if (r <= 9)
					_putchar(' ');
				if (r <= 99)
					_putchar(' ');
				if (r >= 100)
				{
					_putchar((r / 100) + 48);
					_putchar((r / 10) % 10 + 48);
				}
				else if (r <= 99 && r >= 10)
					_putchar((r / 10) + 48);
				_putchar((r % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
