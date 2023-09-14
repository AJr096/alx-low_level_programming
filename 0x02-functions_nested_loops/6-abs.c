#include "main.h"

/**
 * _abs - accentute sthe positive and elimenates teh negative
 *
 *  @,: takes integer type as input for funct
 *
 *  Return: always 0 succ
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
