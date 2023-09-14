#include "main.h"

/**
 * jack_bauer - function that prints every minute of the day J.B., from00 to59
 *
 * Description: it is what it is
 *
 * Return: void
 */

void jack_bauer(void)
{
	int mn, hr;

	for (hr = 0; hr <= 23; hr++)
	{
		for (mn = 0; mn <= 59; mn++)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(':');
			_putchar((mn / 10) + 48);
			_putchar((mn % 10) + 48);
			_putchar('\n');
		}
	}
}
