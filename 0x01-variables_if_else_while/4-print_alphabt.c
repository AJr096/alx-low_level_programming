#include <stdio.h>

/**
 * main - welkom
 *
 * Description: alphabets except q and e
 *
 * Return: alltime 0 (success)
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'q')
			alpha++;
		else if (alpha == 'e')
			alpha++;
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
