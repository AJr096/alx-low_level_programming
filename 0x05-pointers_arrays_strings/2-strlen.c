#include "main.h"

/**
 * _strlen - gives teh length of string
 *
 * @s: prmter input of string
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int mesure;

	for (mesure = 0; *s != '\0'; s++)
		++mesure;
	return (mesure);
}

