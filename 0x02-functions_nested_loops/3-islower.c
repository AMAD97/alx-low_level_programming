#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the char be ckecked
 * Return: 1 if char is lowercase,
 * Return: 0 otherwise.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
