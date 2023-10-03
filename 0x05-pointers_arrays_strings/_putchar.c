#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes teh character a to stdo
 *
 * @c: the character to print
 *
 * Return: 1 on succes and -1 on error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
