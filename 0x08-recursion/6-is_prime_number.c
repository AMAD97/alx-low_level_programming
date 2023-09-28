#include "main.h"

int actual_prime(int n, int i);

/**
 * is_prime_number - tells if an integer is a prime number or not
 * @n: number to Test.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - determine if a Number is prime recursively.
 * @n: number to Test
 * @i: Iterator
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
