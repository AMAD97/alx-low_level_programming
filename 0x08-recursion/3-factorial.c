#include "main.h"

/**
 * factorial - returns factorial
 * @n: factorial
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
