#include "main.h"
#include <unistd.h>

/**
 *  _putchar - writes the character c to stdout
 *   @c: the character to print
 *
 *   Return: On success 1
 *   On error, -1 is returned, abd erno is set appropriatelly.
 *   */
int int_putchar(char c)
{
	return write(1, &c, 1);
}
