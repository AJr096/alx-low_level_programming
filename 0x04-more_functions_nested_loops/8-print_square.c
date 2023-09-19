#include "main.h"

/**
 * print_square - prints a squary square, a bit too long tho
 *
 * @size: sizeu of the squararu
 *
 * Return: ohne
 */

void print_square(int size)
{
	int ln, clm;

	if (size > 0)
	{
		for (ln = 0; ln < size; ln++)
		{
			for (clm = 0; clm < size; clm++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
