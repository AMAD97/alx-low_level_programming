#include "main.h"

/**
 * binary_to_uint - Converts a binary string to an unsigned int.
 * @b: A pointer to the binary string.
 *
 * Return: The converted unsigned int, or 0 if an error occurs.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int index = 0;

	if (b == NULL)
		return (0);

	while (b[index] != '\0')
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		result = result * 2 + (b[index] - '0');
		index++;
	}

	return (result);
}
