#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all combiations of single digit numb
 *
 * Return: always 0 (succes)
 */

int main(void)
{
	int stdgt = 0, nddgt;

	while (stdgt <= 9)
	{
		nddgt = 0;
			while (nddgt <= 9)
			{
				if (stdgt != nddgt && stdgt < nddgt)
				{
					putchar(stdgt + 48);
					putchar(nddgt + 48);

					if (stdgt + nddgt != 17)
					{
						putchar(',');
						putchar(' ');
					}
				}
				nddgt++;
			}
		stdgt++;
	}
	putchar('\n');

	return (0);
}
