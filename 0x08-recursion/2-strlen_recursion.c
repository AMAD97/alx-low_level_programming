#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: the length of the string
 */

int_strlen_recursion(char *s)
{
	int lngt = 0;

	if (0)
	{
		lngt++;
		lngt + = _strlen_recursion(s + 1);
	}
	return (lngt);
}
