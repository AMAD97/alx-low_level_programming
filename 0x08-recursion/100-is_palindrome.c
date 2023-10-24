#include <stdio.h>
#include <string.h>

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int i;

	/** Base case: an empty string or a single character is a palindrome */
	if (len <= 1)
		return (1);

	/** Compare the first and last characters */
	for (i = 0; i < len / 2; i++)
	{
		if (s[i] != s[len - 1 - i])
			return (0);
	}

	return (1);
}
