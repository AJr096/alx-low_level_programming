#include <stdio.h>

/**
 * main - ENTRY PLEASE
 *
 * Description: base of the16
 *
 * Return: 0 means success
 */
int main(void)
{
	int dgt = 48;

	while (dgt <= 102)
	{
		putchar(dgt);

			if (dgt == 57)
				dgt += 39;
		dgt++;
	}
	putchar('\n');

	return (0);
}
