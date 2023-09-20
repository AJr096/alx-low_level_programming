#include <stdio.h>

/**
 * main - entré
 *
 * Description: prog that prints largest prime factor of numb612852475143
 *
 * Return: 0 success
 */

int main(void)
{
	long long num = 612852475143;
	long long lpf = 0;
	long long dvs = 2;

	while (num > 1)
	{
		if (num % dvs == 0)
		{
			lpf = dvs;

			while (num % dvs == 0)
			{
				num = num / dvs;
			}
		}

	dvs++;
	}

	printf("%lld", lpf);
	putchar('\n');

	return (0);
}
