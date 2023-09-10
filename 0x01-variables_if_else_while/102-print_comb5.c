#include <stdio.h>

/**
 * main - main function
 * this function prints all possible combinations
 * of two two-digit numbers.
 * Return: always 0
 */
int main(void)
{
	int i1, i2, j1, j2;

	for (i1 = 0; i1 <= 9; i1++)
	{
		for (i2 = 0; i2 <= 9; i2++)
		{
			for (j1 = i1; j1 <= 9; j1++)
			{
			        for (j2 = (j1 == i1) ? i2 + 1 : 0; j2 <= 9; j2++)
			        {
				    putchar(i1 + '0');
				    putchar(i2 + '0');
				    putchar(' ');
				    putchar(j1 + '0');
				    putchar(j2 + '0');

				    if (!(i1 == 9 && i2 == 8 && j1 == 9 && j2 == 9))
				    {
					putchar(',');
					putchar(' ');
				    }
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
