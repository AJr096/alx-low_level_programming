#include <stdio.h>

/**
 * main - entry please
 *
 * Description: prog that computs sum of multipls of 3 & 5 under 1024(exclu)
 *
 * Return: 0 success
 */

int main(void)
{
	int i, sum;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}
	printf("%d\n", sum);

	return (0);
}
