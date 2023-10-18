#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int num1, num2, result; /* Declare variables at the beginning of the function*/

if (argc != 3)
{
printf("Error\n");
return (1);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);
result = num1 *num2; /*Declare and calculate result in a separate statement*/

printf("%d\n", result);

return (0);
}
