#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: the string to measure
 *
 * Return: int
 */

int _strlen_recursion(char *s)
{
	int lngt = 0;

	if (*s > '\0')
	{
		lngt++;
		lngt += _strlen_recursion(s + 1);
	}
	return (lngt);
}
