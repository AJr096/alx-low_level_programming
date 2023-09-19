#include "main.h"

/**
 * print_diagonal - prints not a so straight line
 *
 * @n: length of line i guess
 *
 * Return: nada
 */

void print_diagonal(int n)
{
	int lnlg, spc;

	if (n > 0)
	{
		for (lnlg = 0; lnlg < n; lnlg++)
		{
			for (spc = 0; spc < lnlg; spc++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
