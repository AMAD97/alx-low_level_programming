#include <stdio.h>

/**
 * main - main function
 * this function print the englidh alphabet in revrse order and return to 0
 *
 * Return: always 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
