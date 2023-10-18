#include <stdlib.h>

void free_grid(int **grid, int height)
{
if (grid != NULL)
{
int i;  /* Declare variables at the beginning of the function*/
for (i = 0; i < height; i++)
{
if (grid[i] != NULL)
{
free(grid[i]);
}
}
free(grid);
}
}
