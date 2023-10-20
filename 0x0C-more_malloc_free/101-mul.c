#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point for the program
 *
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 if the program runs successfully, otherwise 98
 */
int main(int argc, char *argv[])
{
	char *num1;
	char *num2;
	unsigned long num1_val;
	unsigned long num2_val;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1 = argv[1];
	num2 = argv[2];

	/* Check if num1 and num2 consist of digits */
	while (*num1)
	{
		if (*num1 < '0' || *num1 > '9')
		{
			printf("Error\n");
			return (98);
		}
		num1++;
	}

	while (*num2)
	{
		if (*num2 < '0' || *num2 > '9')
		{
			printf("Error\n");
			return (98);
		}
		num2++;
	}

	num1_val = strtoul(argv[1], NULL, 10);
	num2_val = strtoul(argv[2], NULL, 10);

	printf("%lu\n", num1_val * num2_val);

	return (0);
}
