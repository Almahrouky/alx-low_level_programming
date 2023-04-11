#include "main.h"

/**
 * alloc_grid - is the function
 * @width: is an integer
 * @hight: is an integer
 * Return: a pointer char
 */
int **alloc_grid(int width, int height)
{
unsigned int i;
char *x = (char *)malloc(sizeof(width) + sizeof(height));
if (width <= 0 || hight <= 0)
return (NULL);
for (i = 0; i < sizeof(width) + sizeof(height); ++i)
x[i] = 0;
return (x);
}
