#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void simple_print_buffer(char *buffer, unsigned int size);

char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);

char *array = malloc(size * sizeof(char));

if (array == NULL)
return (NULL);

unsigned int i;
for (i = 0; i < size; i++)
array[i] = c;

return (array);
}
