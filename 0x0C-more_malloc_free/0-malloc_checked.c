#include "main.h"

/**
 * malloc_checked - is a function
 * @b: is an unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
b = malloc(sizeof(int));
if (b == NULL)
exit(98);
return (b);
}
