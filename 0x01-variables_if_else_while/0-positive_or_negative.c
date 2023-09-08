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
    /* Declare the variable at the beginning of the block */
    int n;

    /* Seed the random number generator */
    srand(time(NULL));

    /* Generate a random number between INT_MIN and INT_MAX */
    n = rand();

    /* Check if n is positive, negative, or zero */
    printf("The number %d is ", n);
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

