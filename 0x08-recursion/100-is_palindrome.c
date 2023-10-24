#include <stdio.h>

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: The input string
 *
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;

	/** Find the length of the string */
	while (s[len] != '\0')
		len++;

	/** Base case: an empty string or a single character is a palindrome */
	if (len <= 1)
		return (1);

	/** Compare the first and last characters */
	if (s[0] == s[len - 1])
	{
		/** Recursively check the substring without the first and last characters */
		return (is_palindrome(s + 1));
	}
	else
	{
		/** If the first and last characters don't match, it's not a palindrome */
		return (0);
	}
}
