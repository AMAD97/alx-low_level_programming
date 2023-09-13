#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the character c
 * to stdout 
 * @c is the charachter to print
 *
 * Return: on success 1.
 * on error, -1 is returned, 
 * and errno is set appropriatley.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
