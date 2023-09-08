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

srand(time(NULL));

n = rand()-RAND_MAX/2;

/* Check if n is positive, negative, or zero */
printf("%d is ", n);
if (n > 0)
{
printf("positive\n".n);
}
else if (n < 0)
{
printf("negative\n.n");
}
else
{
printf("zero\n.n");
}

return (0);
}

