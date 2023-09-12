#include <stdio.h>

/**
 * main - ENTRY PLEASE
 *
 * Description: z to a
 *
 * Return: 0 means success
 */

int main(void)
{
	char alphab = 'z';

	while (alphab >= 'a')
	{
		putchar(alphab);
		alphab--;
	}
	    putchar('\n');

	return (0);
}
