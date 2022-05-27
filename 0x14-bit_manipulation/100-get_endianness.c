#include "main.h"

/**
 * get-endianness - Checks the endianess
 * Return: Nothing
 */

int get_endianness(void)
{
	unsigned int i = 0;

	char *p = (char *)&i;

	if (*p)
		return (1);
	return (0);
}
