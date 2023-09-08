#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n; /* Declare the variable at the beginning of the block */

/* Seed the random number generator */
srand(time(NULL));

/* Generate a random number between -100 and 100 (inclusive) */
n = (rand() % 201) - 100;

/* Check if n is positive, negative, or zero */
printf("%d is ", n);
if (n > 0)
{
printf("positive\n");
}
else if (n < 0)
{
printf("negative\n");
}
else
{
printf("zero\n");
}

return (0);
}

