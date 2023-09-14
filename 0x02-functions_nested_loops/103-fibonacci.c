#include <stdio.h>

/**
 * main - entry bitte
 *
 * Description: finds and prints the sum of the even-valued terms under 4 mil
 *
 * Return: 0 on Erfolg
 */

int main(void)
{
	unsigned long erste = 1, summe = 0, zweite = 2;

	while (zweite <= 4000000)
	{
		{
		if (zweite % 2 == 0)
			summe += zweite;
		}

	unsigned long nachste = erste + zweite;
	erste = zweite;
	zweite = nachste;
	}

	printf("%lu\n", summe);

	return (0);
}

