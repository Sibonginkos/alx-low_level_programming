#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - Print absolute values of intergers
 * @r: Input interger
 * Return: Absolute value of r
 */

int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
