#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
int n;
int l;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
l = n % 10;
if (l > 5)
printf("last digit of %d is %d and is grater than 5", n, l);
else if (l == 0)
printf("last digit of %d is %d and is 0", n, l);
else if (l < 0 && l! = 0)
printf("last digit of %d is %d and is less than 6 and not 0", n, l);
printf("\n");
return(0);
}
