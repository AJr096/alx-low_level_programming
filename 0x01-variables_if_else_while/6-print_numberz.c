#include <stdio.h>

/**
 * main - entry pointo
 *
 * Description: print from 0 to 9
 *
 * Return: 0 (success)
 */

int main(void)
{
	int numb = 0;

	while (numb <= 9)
	{
		putchar(numb + '0');
		numb++;
	}
	putchar('\n');

	return (0);
}
