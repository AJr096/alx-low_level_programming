#include <stdio.h>

/**
 * main - entrez svp
 *
 * Description: bet on that alphabet
 *
 * Return: the 0 is success
 */

int main(void)
{
	char alphaklein = 'a';
	char alphagross = 'A';

	while (alphaklein <= 'z')
	{
		putchar(alphaklein);
		alphaklein++;
	}

	while (alphagross <= 'Z')
	{
		putchar(alphagross);
		alphagross++;
	}
	putchar('\n');

	return (0);
}
