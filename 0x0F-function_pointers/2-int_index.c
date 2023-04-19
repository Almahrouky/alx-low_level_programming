#include "function_pointers.h"

/**
 * int_index - is a function
 * @array; is a pointer int
 * @size: is an int
 * @cmp: is a pointer funtion
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (cmp == NULL || size <= 0 || array == NULL)
return (-1);
for (i = 0; i < size; ++i)
{
if ((*cmp) (array[i]) != 0)
return (i);
}
return (-1);
}
