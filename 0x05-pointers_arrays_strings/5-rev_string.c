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

	for (length = -1; s[length] != '\0'; length++)
		;
	for (count = -1; count < length / 2; count++)
	{
		step = s[count];
		s[count] = s[length - count];
		s[length - count] = step;
	}
}
