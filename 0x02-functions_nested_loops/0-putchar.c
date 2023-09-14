#include "main.h"

/**
 * main - entry point
 *
 * Description: a program that prints _putchar using _putchar prototype
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char bloss[] = "_putchar";
	int cher;

	for (cher = 0; cher <= 7; cher++)
		_putchar(bloss[cher]);
	_putchar('\n');

	return (0);
}
