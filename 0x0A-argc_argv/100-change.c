#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
/*Check the number of command-line arguments*/

{
int cents, coin_count;
int coins[] = {25, 10, 5, 2, 1};
int i;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);

if (cents < 0)
{
printf("0\n");
return (0);
}

coin_count = 0;

for (i = 0; i < 5; i++)
{
while (cents >= coins[i])
{
cents -= coins[i];
coin_count++;
}
}

printf("%d\n", coin_count);

return (0);
}

