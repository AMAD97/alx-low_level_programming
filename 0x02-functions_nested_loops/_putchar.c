#include "main.h"
#include <unistd.h>
i
/**
 * _putchar - writes the character c
 * to stdout
 * @c: the character to print 
 * Return: 1.
 */

int_putchar(char c)
{
	return(write(1, &c, 1));
}
