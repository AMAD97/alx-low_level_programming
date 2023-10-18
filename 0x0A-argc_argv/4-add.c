#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
int sum = 0;
int num;
int i;

if (argc == 1)
{
printf("0\n"); /* No numbers provided, print 0 */
return (0);
}

for (i = 1; i < argc; i++)
{
num = atoi(argv[i]);
if (num == 0 && argv[i][0] != '0')
{
printf("Error\n");
return (1);
}
if (num < 0)
{
printf("Error\n"); /* Negative number, print Error*/
return (1);
}
sum += num;
}

printf("%d\n", sum); /* Print the sum of positive numbers*/

return (0);
}
