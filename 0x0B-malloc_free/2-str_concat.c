#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
int length1 = 0;
int length2 = 0;
int i, j;
char *result;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[length1] != '\0')
length1++;

while (s2[length2] != '\0')
length2++;

result = (char *)malloc((length1 + length2 + 1) * sizeof(char));

if (result == NULL)
return (NULL);

for (i = 0; i < length1; i++)
{
result[i] = s1[i];
}

for (j = 0; j < length2; j++)
{
result[i + j] = s2[j];
}

result[i + j] = '\0';

return (result);
}
