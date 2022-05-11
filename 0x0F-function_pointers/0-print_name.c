#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Name of a person
 * @f: a function pointer
 * Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
