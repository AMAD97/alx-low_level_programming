#include <stdio.h>

int main(int argc, char *argv[])
{
int i;  /* Declare the loop variable before the loop*/

for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);


return (0);
}

