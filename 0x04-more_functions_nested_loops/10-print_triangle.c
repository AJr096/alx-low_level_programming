#include "main.h"

/**
 * print_triangle - prints a triangle rectangle to the right
 *
 * @size: size input
 *
 * Return: none i guess ?
 */

void print_triangle(int size)
{
	int rw, clm;

	if (size > 0)
	{
		for (rw = 0; rw < size; rw++)
		{
			for (clm = 0; clm < size; clm++)
			{
				if (clm < size - rw - 1)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
