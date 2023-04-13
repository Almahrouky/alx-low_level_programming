#include "main.h"

/**
 * array_range - is a function
 * @min: is the min
 * @max: is the max
 * Return: an int pointer
 */
int *array_range(int min, int max)
{
unsigned int i, size;
int *ptr;
if (min > max)
return (NULL);
size = max - min + 1;
ptr = malloc(sizeof(int) * size);
if (ptr == NULL)
return (NULL);
for (i = 0; i < size; ++i)
ptr[i] = min + i;
return (ptr);
}
