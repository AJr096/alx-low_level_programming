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
	int lnlg;

	if (n > 0)
	{
		lnlg = 0;
		do {
			_putchar('\\');
	       lnlg++;
	if (lnlg < n)
	{
		_putchar(' ');
	}
		}
		while (lnlg < n)
			_putchar('\n');
	}

	else
	{
		_putchar('\n');
	}
}
