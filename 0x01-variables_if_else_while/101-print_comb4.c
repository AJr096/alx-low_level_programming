#include <stdio.h>

/**
 * main - entry point
 *
 * Description: all possible different combo of drei digits
 *
 * Return: always 0 success
 */

int main(void)
{
	int dgt1 = 0, dgt2, dgt3;

	while (dgt1 <= 9)
	{
		dgt2 = 0;
		while (dgt2 <= 9)
		{
		dgt3 = 0;
	while (dgt3 <= 9)
	{
	if (dgt1 != dgt2 && dgt1 < dgt2 && dgt2 != dgt3 && dgt2 < dgt3)
	{
		putchar(dgt1 + 48);
		putchar(dgt2 + 48);
		putchar(dgt3 + 48);

		if (dgt1 + dgt2 + dgt3 != 24)
		{
			putchar(',');
			putchar(' ');
		}
	}
	dgt3++;
	}
	dgt2++;
		}
		dgt1++;
	}
	putchar('\n');

	return (0);
}



