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

				p = b * m;

				if (p <= 9)
					_putchar(' ');
				if (p <= 99)
					_putchar(' ');
				if (p >= 100)
				{
					_putchar((p / 100) + 48);
					_putchar((p / 10) % 10 + 48);
				}
				else if (p <= 99 && p >= 10)
					_putchar((prod / 10) + 48);
				_putchar((p % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
