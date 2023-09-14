#include <stdio.h>

/**
 * main- entry point
 *
 * Description: prog finds & prints st 98 Fibonacci numb, start 1 and 2
 *
 * Return: 0 (succes)
 */

int main(void)

{
	unsigned long st = 1, nd = 2, sm;

	printf("%lu, %lu, ", st, nd);

	for (int i = 3; i < 99; i++)
	{
		sm = st + nd;

		if (i == 98)
		{
			printf("%lu\n", sm);
		}
		else
		{
			printf("%lu, ", sm);
		}

		st = nd;
		nd = sm;
	}

	return (0);
}
