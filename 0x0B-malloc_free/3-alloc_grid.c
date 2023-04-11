#include "main.h"

/**
 * alloc_grid - is the function
 * @width: is an integer
 * @height: is an integer
 * Return: a pointer char
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **arr = malloc(sizeof(int *) * height);
if (arr == NULL)
return (NULL);
for (i = 0; i < height; ++i)
{
arr[i] = malloc(sizeof(int) * width);
if (arr[i] == NULL)
{
for (j = 0; j < i; j++)
free(arr[j]);
free(arr);
return (NULL);
}
for (j = 0; j < width; j++)
arr[i][j] = 0;
}
return (arr);
}
