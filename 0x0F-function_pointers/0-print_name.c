#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name using  pointer to a function
 * @name: string to print
 * @f: the  pointer to the function
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
