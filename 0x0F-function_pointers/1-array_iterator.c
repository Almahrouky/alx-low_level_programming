#include "function_pointers.h"

/**
 * array_iterator - is a function
 * @array: is a pointer
 * @size: is the size
 * @action: is something
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; ++i)
{
action(arr[i]);
}
}
