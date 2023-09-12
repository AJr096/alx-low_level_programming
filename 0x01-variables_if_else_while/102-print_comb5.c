#include <stdio.h>

/**
 * main - point of entry
 *
 * Description: all possible combinations of two digit numb
 *
 * Return: 0 success
 */

int main(void)
{
	int numb1 = 0, numb2;

	while (numb1 <= 99)
	{
		numb2 = numb1;
		while (numb2 <= 99)
		{
			if (numb1 != numb2)
			{
				putchar((numb1 / 10) + 48);
				putchar((numb1 % 10) + 48);
				putchar(' ');
				putchar((numb2 / 10) + 48);
				putchar((numb2 % 10) + 48);

				if (numb1 != 98 || numb2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			numb2++;
		}
		numb1++;
	}
	putchar('\n');

	return (0);
}
