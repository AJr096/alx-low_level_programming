#include "main.h"

/**
 * rev_string - reveses the given string
 *
 * @s: string prmter input
 *
 * Return: void
 */

void rev_string(char *s)
{
	int length, count;
	char step;

	for (length = 0; s[length] != '\0'; length++)
		;
	for (count = 0; count < length / 2; count++)
	{
		step = s[count];
		s[count] = s[length - 1 - count];
		s[length - 1 - count] = step;
	}
}
