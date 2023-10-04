#include "main.h"

/**
 * *_strcpy - cp strg pnted to by src
 *
 * @dest: char typ strng
 * @src: char typ strg
 *
 * Return: the pntr to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = -1;

	do {
		count++;
		dest[count] = src[count];
	} while (src[count] != '\0');

	return (dest);
}
