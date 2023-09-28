#include <stdio.h>

/**
 * _putchar - write the character C to 
 * @c: the chracter to print
 *
 *
 * Return: on success 1 .
 * On error, -1 is returned, and errno is set appropriately.
 */

int_putchar(char c)
{
	return(write(1, &c, 1));
}
