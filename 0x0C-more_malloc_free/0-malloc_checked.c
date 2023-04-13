#include "main.h"

/**
 * malloc_checked - is a function
 * @b: is an unsigned int
 * Return: void
 */
void *malloc_checked(unsigned int b)
{

int *ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}
