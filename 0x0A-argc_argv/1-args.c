#include <stdio.h>

int main(int argc, char *argv[])
{
(void)argv; /* Silence the unused parameter warning*/
printf("%d\n", argc - 1);  /* Subtract 1 to exclude the program name*/
return (0);
}
