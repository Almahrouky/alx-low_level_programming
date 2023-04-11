#include "main.h"

/**
 * free_grid - is the function
 * @grid: is the grid
 * @height: is an integer
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; ++i)
{
free(grid[i]);
}
free(grid);
}
