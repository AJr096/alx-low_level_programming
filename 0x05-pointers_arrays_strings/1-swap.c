#include "main.h"

/**
 * swap_int - swaps the values of2 ints
 *
 * @a: input of first parameter
 * @b: input of the second parameter
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int swaped;

	swaped = *a;
	*a = *b;
	*b = swaped;
}
